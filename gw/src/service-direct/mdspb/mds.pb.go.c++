// Code generated by protoc-gen-go. DO NOT EDIT.
// source: service/mdspb/mds.proto

package mds

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type AssignDssRequest struct {
	Count                int32    `protobuf:"zigzag32,1,opt,name=count,proto3" json:"count,omitempty"`
	Duan                 []uint64 `protobuf:"varint,2,rep,packed,name=duan,proto3" json:"duan,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AssignDssRequest) Reset()         { *m = AssignDssRequest{} }
func (m *AssignDssRequest) String() string { return proto.CompactTextString(m) }
func (*AssignDssRequest) ProtoMessage()    {}
func (*AssignDssRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{0}
}
func (m *AssignDssRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AssignDssRequest.Unmarshal(m, b)
}
func (m *AssignDssRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AssignDssRequest.Marshal(b, m, deterministic)
}
func (dst *AssignDssRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AssignDssRequest.Merge(dst, src)
}
func (m *AssignDssRequest) XXX_Size() int {
	return xxx_messageInfo_AssignDssRequest.Size(m)
}
func (m *AssignDssRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_AssignDssRequest.DiscardUnknown(m)
}

var xxx_messageInfo_AssignDssRequest proto.InternalMessageInfo

func (m *AssignDssRequest) GetCount() int32 {
	if m != nil {
		return m.Count
	}
	return 0
}

func (m *AssignDssRequest) GetDuan() []uint64 {
	if m != nil {
		return m.Duan
	}
	return nil
}

type AssignDssReponse struct {
	Ret                  int32    `protobuf:"zigzag32,1,opt,name=ret,proto3" json:"ret,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *AssignDssReponse) Reset()         { *m = AssignDssReponse{} }
func (m *AssignDssReponse) String() string { return proto.CompactTextString(m) }
func (*AssignDssReponse) ProtoMessage()    {}
func (*AssignDssReponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{1}
}
func (m *AssignDssReponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_AssignDssReponse.Unmarshal(m, b)
}
func (m *AssignDssReponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_AssignDssReponse.Marshal(b, m, deterministic)
}
func (dst *AssignDssReponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_AssignDssReponse.Merge(dst, src)
}
func (m *AssignDssReponse) XXX_Size() int {
	return xxx_messageInfo_AssignDssReponse.Size(m)
}
func (m *AssignDssReponse) XXX_DiscardUnknown() {
	xxx_messageInfo_AssignDssReponse.DiscardUnknown(m)
}

var xxx_messageInfo_AssignDssReponse proto.InternalMessageInfo

func (m *AssignDssReponse) GetRet() int32 {
	if m != nil {
		return m.Ret
	}
	return 0
}

type SpaceRequest struct {
	Name                 string   `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Size                 uint64   `protobuf:"varint,2,opt,name=size,proto3" json:"size,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *SpaceRequest) Reset()         { *m = SpaceRequest{} }
func (m *SpaceRequest) String() string { return proto.CompactTextString(m) }
func (*SpaceRequest) ProtoMessage()    {}
func (*SpaceRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{2}
}
func (m *SpaceRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SpaceRequest.Unmarshal(m, b)
}
func (m *SpaceRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SpaceRequest.Marshal(b, m, deterministic)
}
func (dst *SpaceRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SpaceRequest.Merge(dst, src)
}
func (m *SpaceRequest) XXX_Size() int {
	return xxx_messageInfo_SpaceRequest.Size(m)
}
func (m *SpaceRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_SpaceRequest.DiscardUnknown(m)
}

var xxx_messageInfo_SpaceRequest proto.InternalMessageInfo

func (m *SpaceRequest) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *SpaceRequest) GetSize() uint64 {
	if m != nil {
		return m.Size
	}
	return 0
}

type Extent struct {
	Offset               uint64   `protobuf:"varint,1,opt,name=offset,proto3" json:"offset,omitempty"`
	Length               uint64   `protobuf:"varint,2,opt,name=length,proto3" json:"length,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Extent) Reset()         { *m = Extent{} }
func (m *Extent) String() string { return proto.CompactTextString(m) }
func (*Extent) ProtoMessage()    {}
func (*Extent) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{3}
}
func (m *Extent) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Extent.Unmarshal(m, b)
}
func (m *Extent) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Extent.Marshal(b, m, deterministic)
}
func (dst *Extent) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Extent.Merge(dst, src)
}
func (m *Extent) XXX_Size() int {
	return xxx_messageInfo_Extent.Size(m)
}
func (m *Extent) XXX_DiscardUnknown() {
	xxx_messageInfo_Extent.DiscardUnknown(m)
}

var xxx_messageInfo_Extent proto.InternalMessageInfo

func (m *Extent) GetOffset() uint64 {
	if m != nil {
		return m.Offset
	}
	return 0
}

func (m *Extent) GetLength() uint64 {
	if m != nil {
		return m.Length
	}
	return 0
}

type SpaceResponse struct {
	Ret                  int32     `protobuf:"zigzag32,1,opt,name=ret,proto3" json:"ret,omitempty"`
	Ds                   uint32    `protobuf:"varint,2,opt,name=ds,proto3" json:"ds,omitempty"`
	Count                uint64    `protobuf:"varint,3,opt,name=count,proto3" json:"count,omitempty"`
	Extents              []*Extent `protobuf:"bytes,4,rep,name=Extents,proto3" json:"Extents,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *SpaceResponse) Reset()         { *m = SpaceResponse{} }
func (m *SpaceResponse) String() string { return proto.CompactTextString(m) }
func (*SpaceResponse) ProtoMessage()    {}
func (*SpaceResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{4}
}
func (m *SpaceResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_SpaceResponse.Unmarshal(m, b)
}
func (m *SpaceResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_SpaceResponse.Marshal(b, m, deterministic)
}
func (dst *SpaceResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_SpaceResponse.Merge(dst, src)
}
func (m *SpaceResponse) XXX_Size() int {
	return xxx_messageInfo_SpaceResponse.Size(m)
}
func (m *SpaceResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_SpaceResponse.DiscardUnknown(m)
}

var xxx_messageInfo_SpaceResponse proto.InternalMessageInfo

func (m *SpaceResponse) GetRet() int32 {
	if m != nil {
		return m.Ret
	}
	return 0
}

func (m *SpaceResponse) GetDs() uint32 {
	if m != nil {
		return m.Ds
	}
	return 0
}

func (m *SpaceResponse) GetCount() uint64 {
	if m != nil {
		return m.Count
	}
	return 0
}

func (m *SpaceResponse) GetExtents() []*Extent {
	if m != nil {
		return m.Extents
	}
	return nil
}

type MetadataRequest struct {
	Name                 string    `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Size                 uint64    `protobuf:"varint,2,opt,name=size,proto3" json:"size,omitempty"`
	Ds                   uint32    `protobuf:"varint,3,opt,name=ds,proto3" json:"ds,omitempty"`
	Count                uint64    `protobuf:"varint,4,opt,name=count,proto3" json:"count,omitempty"`
	Extents              []*Extent `protobuf:"bytes,5,rep,name=Extents,proto3" json:"Extents,omitempty"`
	XXX_NoUnkeyedLiteral struct{}  `json:"-"`
	XXX_unrecognized     []byte    `json:"-"`
	XXX_sizecache        int32     `json:"-"`
}

func (m *MetadataRequest) Reset()         { *m = MetadataRequest{} }
func (m *MetadataRequest) String() string { return proto.CompactTextString(m) }
func (*MetadataRequest) ProtoMessage()    {}
func (*MetadataRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{5}
}
func (m *MetadataRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_MetadataRequest.Unmarshal(m, b)
}
func (m *MetadataRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_MetadataRequest.Marshal(b, m, deterministic)
}
func (dst *MetadataRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MetadataRequest.Merge(dst, src)
}
func (m *MetadataRequest) XXX_Size() int {
	return xxx_messageInfo_MetadataRequest.Size(m)
}
func (m *MetadataRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_MetadataRequest.DiscardUnknown(m)
}

var xxx_messageInfo_MetadataRequest proto.InternalMessageInfo

func (m *MetadataRequest) GetName() string {
	if m != nil {
		return m.Name
	}
	return ""
}

func (m *MetadataRequest) GetSize() uint64 {
	if m != nil {
		return m.Size
	}
	return 0
}

func (m *MetadataRequest) GetDs() uint32 {
	if m != nil {
		return m.Ds
	}
	return 0
}

func (m *MetadataRequest) GetCount() uint64 {
	if m != nil {
		return m.Count
	}
	return 0
}

func (m *MetadataRequest) GetExtents() []*Extent {
	if m != nil {
		return m.Extents
	}
	return nil
}

type MetadataResponse struct {
	Ret                  int32    `protobuf:"zigzag32,1,opt,name=ret,proto3" json:"ret,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *MetadataResponse) Reset()         { *m = MetadataResponse{} }
func (m *MetadataResponse) String() string { return proto.CompactTextString(m) }
func (*MetadataResponse) ProtoMessage()    {}
func (*MetadataResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{6}
}
func (m *MetadataResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_MetadataResponse.Unmarshal(m, b)
}
func (m *MetadataResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_MetadataResponse.Marshal(b, m, deterministic)
}
func (dst *MetadataResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_MetadataResponse.Merge(dst, src)
}
func (m *MetadataResponse) XXX_Size() int {
	return xxx_messageInfo_MetadataResponse.Size(m)
}
func (m *MetadataResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_MetadataResponse.DiscardUnknown(m)
}

var xxx_messageInfo_MetadataResponse proto.InternalMessageInfo

func (m *MetadataResponse) GetRet() int32 {
	if m != nil {
		return m.Ret
	}
	return 0
}

type ResponseRequest struct {
	Ret                  int32    `protobuf:"zigzag32,1,opt,name=ret,proto3" json:"ret,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ResponseRequest) Reset()         { *m = ResponseRequest{} }
func (m *ResponseRequest) String() string { return proto.CompactTextString(m) }
func (*ResponseRequest) ProtoMessage()    {}
func (*ResponseRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_mds_1798029cc738046f, []int{7}
}
func (m *ResponseRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ResponseRequest.Unmarshal(m, b)
}
func (m *ResponseRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ResponseRequest.Marshal(b, m, deterministic)
}
func (dst *ResponseRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ResponseRequest.Merge(dst, src)
}
func (m *ResponseRequest) XXX_Size() int {
	return xxx_messageInfo_ResponseRequest.Size(m)
}
func (m *ResponseRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_ResponseRequest.DiscardUnknown(m)
}

var xxx_messageInfo_ResponseRequest proto.InternalMessageInfo

func (m *ResponseRequest) GetRet() int32 {
	if m != nil {
		return m.Ret
	}
	return 0
}

func init() {
	proto.RegisterType((*AssignDssRequest)(nil), "mds.AssignDssRequest")
	proto.RegisterType((*AssignDssReponse)(nil), "mds.AssignDssReponse")
	proto.RegisterType((*SpaceRequest)(nil), "mds.SpaceRequest")
	proto.RegisterType((*Extent)(nil), "mds.Extent")
	proto.RegisterType((*SpaceResponse)(nil), "mds.SpaceResponse")
	proto.RegisterType((*MetadataRequest)(nil), "mds.MetadataRequest")
	proto.RegisterType((*MetadataResponse)(nil), "mds.MetadataResponse")
	proto.RegisterType((*ResponseRequest)(nil), "mds.ResponseRequest")
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// MetadataServerClient is the client API for MetadataServer service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type MetadataServerClient interface {
	AssignDss(ctx context.Context, in *AssignDssRequest, opts ...grpc.CallOption) (*AssignDssReponse, error)
	GetSpace(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (MetadataServer_GetSpaceClient, error)
	SaveMetadata(ctx context.Context, in *MetadataRequest, opts ...grpc.CallOption) (*MetadataResponse, error)
	GetResponse(ctx context.Context, in *ResponseRequest, opts ...grpc.CallOption) (*MetadataResponse, error)
	RemoveMetadata(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (*MetadataResponse, error)
	GetMetadata(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (*MetadataRequest, error)
}

type metadataServerClient struct {
	cc *grpc.ClientConn
}

func NewMetadataServerClient(cc *grpc.ClientConn) MetadataServerClient {
	return &metadataServerClient{cc}
}

func (c *metadataServerClient) AssignDss(ctx context.Context, in *AssignDssRequest, opts ...grpc.CallOption) (*AssignDssReponse, error) {
	out := new(AssignDssReponse)
	err := c.cc.Invoke(ctx, "/mds.MetadataServer/AssignDss", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *metadataServerClient) GetSpace(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (MetadataServer_GetSpaceClient, error) {
	stream, err := c.cc.NewStream(ctx, &_MetadataServer_serviceDesc.Streams[0], "/mds.MetadataServer/GetSpace", opts...)
	if err != nil {
		return nil, err
	}
	x := &metadataServerGetSpaceClient{stream}
	if err := x.ClientStream.SendMsg(in); err != nil {
		return nil, err
	}
	if err := x.ClientStream.CloseSend(); err != nil {
		return nil, err
	}
	return x, nil
}

type MetadataServer_GetSpaceClient interface {
	Recv() (*SpaceResponse, error)
	grpc.ClientStream
}

type metadataServerGetSpaceClient struct {
	grpc.ClientStream
}

func (x *metadataServerGetSpaceClient) Recv() (*SpaceResponse, error) {
	m := new(SpaceResponse)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

func (c *metadataServerClient) SaveMetadata(ctx context.Context, in *MetadataRequest, opts ...grpc.CallOption) (*MetadataResponse, error) {
	out := new(MetadataResponse)
	err := c.cc.Invoke(ctx, "/mds.MetadataServer/SaveMetadata", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *metadataServerClient) GetResponse(ctx context.Context, in *ResponseRequest, opts ...grpc.CallOption) (*MetadataResponse, error) {
	out := new(MetadataResponse)
	err := c.cc.Invoke(ctx, "/mds.MetadataServer/GetResponse", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *metadataServerClient) RemoveMetadata(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (*MetadataResponse, error) {
	out := new(MetadataResponse)
	err := c.cc.Invoke(ctx, "/mds.MetadataServer/RemoveMetadata", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *metadataServerClient) GetMetadata(ctx context.Context, in *SpaceRequest, opts ...grpc.CallOption) (*MetadataRequest, error) {
	out := new(MetadataRequest)
	err := c.cc.Invoke(ctx, "/mds.MetadataServer/GetMetadata", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// MetadataServerServer is the server API for MetadataServer service.
type MetadataServerServer interface {
	AssignDss(context.Context, *AssignDssRequest) (*AssignDssReponse, error)
	GetSpace(*SpaceRequest, MetadataServer_GetSpaceServer) error
	SaveMetadata(context.Context, *MetadataRequest) (*MetadataResponse, error)
	GetResponse(context.Context, *ResponseRequest) (*MetadataResponse, error)
	RemoveMetadata(context.Context, *SpaceRequest) (*MetadataResponse, error)
	GetMetadata(context.Context, *SpaceRequest) (*MetadataRequest, error)
}

func RegisterMetadataServerServer(s *grpc.Server, srv MetadataServerServer) {
	s.RegisterService(&_MetadataServer_serviceDesc, srv)
}

func _MetadataServer_AssignDss_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(AssignDssRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MetadataServerServer).AssignDss(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/mds.MetadataServer/AssignDss",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MetadataServerServer).AssignDss(ctx, req.(*AssignDssRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _MetadataServer_GetSpace_Handler(srv interface{}, stream grpc.ServerStream) error {
	m := new(SpaceRequest)
	if err := stream.RecvMsg(m); err != nil {
		return err
	}
	return srv.(MetadataServerServer).GetSpace(m, &metadataServerGetSpaceServer{stream})
}

type MetadataServer_GetSpaceServer interface {
	Send(*SpaceResponse) error
	grpc.ServerStream
}

type metadataServerGetSpaceServer struct {
	grpc.ServerStream
}

func (x *metadataServerGetSpaceServer) Send(m *SpaceResponse) error {
	return x.ServerStream.SendMsg(m)
}

func _MetadataServer_SaveMetadata_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(MetadataRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MetadataServerServer).SaveMetadata(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/mds.MetadataServer/SaveMetadata",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MetadataServerServer).SaveMetadata(ctx, req.(*MetadataRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _MetadataServer_GetResponse_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ResponseRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MetadataServerServer).GetResponse(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/mds.MetadataServer/GetResponse",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MetadataServerServer).GetResponse(ctx, req.(*ResponseRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _MetadataServer_RemoveMetadata_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SpaceRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MetadataServerServer).RemoveMetadata(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/mds.MetadataServer/RemoveMetadata",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MetadataServerServer).RemoveMetadata(ctx, req.(*SpaceRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _MetadataServer_GetMetadata_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(SpaceRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(MetadataServerServer).GetMetadata(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/mds.MetadataServer/GetMetadata",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(MetadataServerServer).GetMetadata(ctx, req.(*SpaceRequest))
	}
	return interceptor(ctx, in, info, handler)
}

var _MetadataServer_serviceDesc = grpc.ServiceDesc{
	ServiceName: "mds.MetadataServer",
	HandlerType: (*MetadataServerServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "AssignDss",
			Handler:    _MetadataServer_AssignDss_Handler,
		},
		{
			MethodName: "SaveMetadata",
			Handler:    _MetadataServer_SaveMetadata_Handler,
		},
		{
			MethodName: "GetResponse",
			Handler:    _MetadataServer_GetResponse_Handler,
		},
		{
			MethodName: "RemoveMetadata",
			Handler:    _MetadataServer_RemoveMetadata_Handler,
		},
		{
			MethodName: "GetMetadata",
			Handler:    _MetadataServer_GetMetadata_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "GetSpace",
			Handler:       _MetadataServer_GetSpace_Handler,
			ServerStreams: true,
		},
	},
	Metadata: "service/mdspb/mds.proto",
}

func init() { proto.RegisterFile("service/mdspb/mds.proto", fileDescriptor_mds_1798029cc738046f) }

var fileDescriptor_mds_1798029cc738046f = []byte{
	// 400 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x93, 0xdf, 0xae, 0xd2, 0x40,
	0x10, 0xc6, 0xe9, 0x9f, 0x83, 0x9e, 0xe1, 0x1c, 0x0e, 0x67, 0x82, 0xda, 0x70, 0xd5, 0xac, 0x98,
	0x70, 0x85, 0x06, 0xa3, 0x21, 0x11, 0x2f, 0x4c, 0x34, 0x5c, 0x79, 0xb3, 0x3c, 0x41, 0xa1, 0x03,
	0x92, 0xd8, 0x6d, 0xed, 0x2c, 0xc4, 0xf8, 0x00, 0xbe, 0xb3, 0x77, 0xa6, 0xdb, 0x2d, 0x60, 0xa1,
	0x24, 0xde, 0x34, 0xb3, 0xb3, 0xf3, 0xcd, 0xfc, 0xbe, 0xdd, 0x2d, 0xbc, 0x60, 0xca, 0xf7, 0xdb,
	0x15, 0xbd, 0x4e, 0x62, 0xce, 0x96, 0xc5, 0x77, 0x9c, 0xe5, 0xa9, 0x4e, 0xd1, 0x4b, 0x62, 0x16,
	0x33, 0xe8, 0x7d, 0x62, 0xde, 0x6e, 0xd4, 0x67, 0x66, 0x49, 0x3f, 0x76, 0xc4, 0x1a, 0xfb, 0x70,
	0xb3, 0x4a, 0x77, 0x4a, 0x07, 0x4e, 0xe8, 0x8c, 0x1e, 0x65, 0xb9, 0x40, 0x04, 0x3f, 0xde, 0x45,
	0x2a, 0x70, 0x43, 0x6f, 0xe4, 0x4b, 0x13, 0x8b, 0xe1, 0x3f, 0xea, 0x2c, 0x55, 0x4c, 0xd8, 0x03,
	0x2f, 0xa7, 0x4a, 0x5b, 0x84, 0xe2, 0x3d, 0xdc, 0x2d, 0xb2, 0x68, 0x45, 0x55, 0x7f, 0x04, 0x5f,
	0x45, 0x09, 0x99, 0x92, 0x5b, 0x69, 0xe2, 0x22, 0xc7, 0xdb, 0x5f, 0x14, 0xb8, 0xa1, 0x53, 0x74,
	0x2f, 0x62, 0x31, 0x85, 0xf6, 0x97, 0x9f, 0x9a, 0x94, 0xc6, 0xe7, 0xd0, 0x4e, 0xd7, 0x6b, 0xb6,
	0x6d, 0x7d, 0x69, 0x57, 0x45, 0xfe, 0x3b, 0xa9, 0x8d, 0xfe, 0x66, 0x75, 0x76, 0x25, 0x14, 0xdc,
	0xdb, 0x89, 0xdc, 0x00, 0x85, 0x5d, 0x70, 0x63, 0x36, 0xb2, 0x7b, 0xe9, 0xc6, 0x7c, 0x34, 0xed,
	0x99, 0x4e, 0xd6, 0xf4, 0x2b, 0x78, 0x52, 0x22, 0x70, 0xe0, 0x87, 0xde, 0xa8, 0x33, 0xe9, 0x8c,
	0x8b, 0x03, 0x2c, 0x73, 0xb2, 0xda, 0x13, 0xbf, 0x1d, 0x78, 0xf8, 0x4a, 0x3a, 0x8a, 0x23, 0x1d,
	0xfd, 0xa7, 0x4b, 0x0b, 0xe2, 0x9d, 0x83, 0xf8, 0x0d, 0x20, 0x37, 0x57, 0x40, 0x86, 0xd0, 0x3b,
	0x72, 0x34, 0x79, 0x17, 0x2f, 0xe1, 0xa1, 0xda, 0xad, 0x68, 0xcf, 0x8a, 0x26, 0x7f, 0x5c, 0xe8,
	0x56, 0xbd, 0x16, 0x94, 0xef, 0x29, 0xc7, 0x0f, 0x70, 0x7b, 0xb8, 0x6e, 0x7c, 0x66, 0x00, 0xea,
	0x8f, 0x67, 0x70, 0x96, 0x36, 0x63, 0x44, 0x0b, 0xdf, 0xc1, 0xd3, 0x39, 0x69, 0x73, 0x2d, 0xf8,
	0x68, 0x8a, 0x4e, 0x1f, 0xc5, 0x00, 0x4f, 0x53, 0x6c, 0x45, 0x6f, 0x1c, 0xfc, 0x08, 0x77, 0x8b,
	0x68, 0x4f, 0x15, 0x09, 0xf6, 0x4d, 0x5d, 0xed, 0xb0, 0xed, 0xd4, 0xba, 0x75, 0xd1, 0xc2, 0x19,
	0x74, 0xe6, 0xa4, 0x0f, 0x67, 0x51, 0xaa, 0x6b, 0xe6, 0xaf, 0xa9, 0xbb, 0x92, 0x92, 0xf4, 0x64,
	0xfc, 0x05, 0xf2, 0x46, 0xf5, 0xd4, 0xcc, 0xbe, 0x26, 0xbd, 0x68, 0x46, 0xb4, 0x96, 0x6d, 0xf3,
	0x87, 0xbe, 0xfd, 0x1b, 0x00, 0x00, 0xff, 0xff, 0x9d, 0xe9, 0x28, 0x76, 0xbc, 0x03, 0x00, 0x00,
}