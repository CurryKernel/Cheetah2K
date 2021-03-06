package service_direct

import (
	"../config"
	bitstore "../service-direct/dsspb"
	mds "../service-direct/mdspb"
	"bytes"
	"context"
	"fmt"
	"io"
	"log"
	"net/http"
	"time"
)

func GetFileLogicGrpc(ctx *Context) { //一个请求只读一个位置的信息
	buf := bytes.NewBuffer(nil)
	buf.WriteString("ng-start-read: ")
	//buf.WriteString(fmt.Sprintf("req in time: %v --->", time.Since(ctx.start).Nanoseconds()/time.Millisecond.Nanoseconds()))
	// meta data
	resp, diskid, mdsaddr := getMetadata(buf, ctx) //获取偏移量和长度
	if resp == nil {
		return
	}
	if resp.Count == 0 || len(resp.Extents) == 0 {
		ctx.result = &Result{InternalError, "mds return no space"}
		return
	}
	//buf.WriteString(fmt.Sprintf("get allocater time: %v --->", time.Since(ctx.start).Nanoseconds()/time.Millisecond.Nanoseconds()))
	addr := config.Mastermds2MasterDss[mdsaddr][diskid]
	conn, err := config.DSSPool[addr].Get() //获得dss链接
	if err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("can't connect: %v", err)}
		return
	}
	defer conn.Close()
	client := bitstore.NewBitStoreClient(conn.Value()) //获得客户端服务
	stream, err := client.Get(context.Background())    //构建取流链接
	if err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("put stream error: %v", err)}
		return
	}
	//buf.WriteString(fmt.Sprintf("dss grpc craete time: %v --->", time.Since(ctx.start).Nanoseconds()/time.Millisecond.Nanoseconds()))

	req := &bitstore.GetRequest{
		Offset: ctx.offset,
		Length: ctx.length,
	} //初始化访问内容
	if err := stream.Send(req); err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("send get req error: %v", err)}
		return
	} //发送
	if err := stream.CloseSend(); err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("close send error: %v", err)}
		return
	} //关闭发送窗口
	//buf.WriteString(fmt.Sprintf("req send time: %v --->", time.Since(ctx.start).Nanoseconds()/time.Millisecond.Nanoseconds()))
	resp2, err := stream.Recv() //获取数据
	buf.WriteString(fmt.Sprintf("DSS返回点:%v--->", time.Since(ctx.start).Nanoseconds()))
	if err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("get resp error: %v", err)}
		return
	}

	if resp2.Errcode < 0 {
		ctx.result = &Result{InternalError, fmt.Sprintf("get resp error code error: %v", resp2.Errcode)}
		return
	}
	var nnn = ctx.length
	//65536 8192 524288
	s := make([]uint8, nnn) //len(resp2.Data)
	for index := 0; uint64(index) < nnn; index++ {
		s[index] = resp2.Data[index]
	}

	ctx.reader = bytes.NewReader(s) //得到数据
	log.Println(buf.String())
}

func getMetadata(buf *bytes.Buffer, ctx *Context) (*mds.MetadataRequest, uint32, string) {
	mdsAddr := SelectMds(ctx.ns, ctx.key) //hash 选择一个mds
	if mdsAddr == "" {
		ctx.result = &Result{InternalError, fmt.Sprintf("no mds to use")}
		return nil, 0, ""
	}
	conn, err := config.MDSPool[mdsAddr].Get() //链接选定的mds
	if err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("can't connect: %v", err)}
		return nil, 0, ""
	}
	defer conn.Close()

	client := mds.NewMetadataServerClient(conn.Value()) //初始化一个client，详见mds.pb.go
	req := mds.SpaceRequest{
		Name: ctx.ns + ctx.key, //vars["bucket"] + vars["object"] 这个Name是做什么用的呢？
		Size: uint64(ctx.size),
	}

	resp, err := client.GetMetadata(context.Background(), &req) //调用方法获得偏移量和长度
	if err != nil {
		ctx.result = &Result{InternalError, fmt.Sprintf("get space error: %v", err)}
		return nil, 0, ""
	}
	buf.WriteString(fmt.Sprintf("MDS返回点1:%v ", time.Since(ctx.start).Nanoseconds()))

	if resp.Count == 0 {
		ctx.result = &Result{InternalError, fmt.Sprintf("get space to error: no space")}
		return nil, 0, ""
	}
	ctx.offset = resp.Extents[0].Offset //改变长度和偏移量
	ctx.length = resp.Extents[0].Length
	return resp, resp.Ds, mdsAddr
}

func SuccRespGetFileGrpc(w http.ResponseWriter, ctx *Context) {
	var err error

	w.Header().Set("x-request-id", ctx.requestId)
	w.Header().Set("x-gift-server", ctx.host)
	w.Header().Set("Access-Control-Allow-Origin", "*")
	w.Header().Set("Content-Length", fmt.Sprintf("%d", ctx.length))

	w.WriteHeader(ctx.result.ErrorCode.StatusCode)

	ctx.size, err = io.Copy(w, ctx.reader)
	if err != nil {
		ctx.result = &Result{IOCopyFailure, "io.Copy fail: " + err.Error()}
		return
	}
}

func SuccRespHeadFileGrpc(w http.ResponseWriter, ctx *Context) {
	w.Header().Set("x-request-id", ctx.requestId)
	w.Header().Set("x-gift-server", ctx.host)
	w.Header().Set("Access-Control-Allow-Origin", "*")

	w.WriteHeader(ctx.result.ErrorCode.StatusCode)
	w.Write(nil)
}
