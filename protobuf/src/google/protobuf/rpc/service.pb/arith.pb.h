// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: arith.proto

#ifndef PROTOBUF_arith_2eproto__INCLUDED
#define PROTOBUF_arith_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/xml/xml_message.h>
#include <google/protobuf/rpc/rpc_service.h>
#include <google/protobuf/rpc/rpc_client.h>
// @@protoc_insertion_point(includes)

namespace service {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_arith_2eproto();
void protobuf_AssignDesc_arith_2eproto();
void protobuf_ShutdownFile_arith_2eproto();

class ArithRequest;
class ArithResponse;

// ===================================================================

class ArithRequest : public ::google::protobuf::Message {
 public:
  ArithRequest();
  virtual ~ArithRequest();
  
  ArithRequest(const ArithRequest& from);
  
  inline ArithRequest& operator=(const ArithRequest& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ArithRequest& default_instance();
  
  void Swap(ArithRequest* other);
  
  // implements Message ----------------------------------------------
  
  ArithRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArithRequest& from);
  void MergeFrom(const ArithRequest& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // xml support -----------------------------------------------------
  
  // Parse a protocol buffer contained in a string.
  bool ParseFromXmlString(const std::string& data);
  // Like ParseFromXmlString(), but accepts messages that are missing
  // required fields.
  bool ParsePartialFromXmlString(const std::string& data);
  
  // Serialize the message and store it in the given string.  All required
  // fields must be set.
  bool SerializeToXmlString(std::string* output) const;
  // Like SerializeToXmlString(), but allows missing required fields.
  bool SerializePartialToXmlString(std::string* output) const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 a = 1;
  inline bool has_a() const;
  inline void clear_a();
  static const int kAFieldNumber = 1;
  inline ::google::protobuf::int32 a() const;
  inline void set_a(::google::protobuf::int32 value);
  
  // optional int32 b = 2;
  inline bool has_b() const;
  inline void clear_b();
  static const int kBFieldNumber = 2;
  inline ::google::protobuf::int32 b() const;
  inline void set_b(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:service.ArithRequest)
 private:
  inline void set_has_a();
  inline void clear_has_a();
  inline void set_has_b();
  inline void clear_has_b();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 a_;
  ::google::protobuf::int32 b_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_arith_2eproto();
  friend void protobuf_AssignDesc_arith_2eproto();
  friend void protobuf_ShutdownFile_arith_2eproto();
  
  void InitAsDefaultInstance();
  static ArithRequest* default_instance_;
};
// -------------------------------------------------------------------

class ArithResponse : public ::google::protobuf::Message {
 public:
  ArithResponse();
  virtual ~ArithResponse();
  
  ArithResponse(const ArithResponse& from);
  
  inline ArithResponse& operator=(const ArithResponse& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const ArithResponse& default_instance();
  
  void Swap(ArithResponse* other);
  
  // implements Message ----------------------------------------------
  
  ArithResponse* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ArithResponse& from);
  void MergeFrom(const ArithResponse& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // xml support -----------------------------------------------------
  
  // Parse a protocol buffer contained in a string.
  bool ParseFromXmlString(const std::string& data);
  // Like ParseFromXmlString(), but accepts messages that are missing
  // required fields.
  bool ParsePartialFromXmlString(const std::string& data);
  
  // Serialize the message and store it in the given string.  All required
  // fields must be set.
  bool SerializeToXmlString(std::string* output) const;
  // Like SerializeToXmlString(), but allows missing required fields.
  bool SerializePartialToXmlString(std::string* output) const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 c = 1;
  inline bool has_c() const;
  inline void clear_c();
  static const int kCFieldNumber = 1;
  inline ::google::protobuf::int32 c() const;
  inline void set_c(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:service.ArithResponse)
 private:
  inline void set_has_c();
  inline void clear_has_c();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::int32 c_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_arith_2eproto();
  friend void protobuf_AssignDesc_arith_2eproto();
  friend void protobuf_ShutdownFile_arith_2eproto();
  
  void InitAsDefaultInstance();
  static ArithResponse* default_instance_;
};
// ===================================================================

class ArithService_Stub;

class ArithService : public ::google::protobuf::rpc::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline ArithService() {};
 public:
  virtual ~ArithService();
  
  typedef ArithService_Stub Stub;
  
  static const ::google::protobuf::ServiceDescriptor* descriptor();
  
  virtual const ::google::protobuf::rpc::Error add(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  virtual const ::google::protobuf::rpc::Error mul(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  virtual const ::google::protobuf::rpc::Error div(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  virtual const ::google::protobuf::rpc::Error error(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  
  // implements Service ----------------------------------------------
  
  const ::google::protobuf::ServiceDescriptor* GetDescriptor();
  const ::google::protobuf::rpc::Error CallMethod(
    const ::google::protobuf::MethodDescriptor* method,
    const ::google::protobuf::Message* request,
    ::google::protobuf::Message* response);
  const ::google::protobuf::Message& GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const;
  const ::google::protobuf::Message& GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ArithService);
};

class ArithService_Stub : public ArithService {
 public:
  ArithService_Stub(::google::protobuf::rpc::Caller* client);
  ArithService_Stub(::google::protobuf::rpc::Caller* client, bool client_ownership);
  ~ArithService_Stub();
  
  // implements ArithService ------------------------------------------
  
  const ::google::protobuf::rpc::Error add(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  const ::google::protobuf::rpc::Error mul(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  const ::google::protobuf::rpc::Error div(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);
  const ::google::protobuf::rpc::Error error(
    const ::service::ArithRequest* request,
    ::service::ArithResponse* response);

 private:
  ::google::protobuf::rpc::Caller* client_;
  bool owns_client_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(ArithService_Stub);
};


// ===================================================================


// ===================================================================

// ArithRequest

// optional int32 a = 1;
inline bool ArithRequest::has_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArithRequest::set_has_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ArithRequest::clear_has_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ArithRequest::clear_a() {
  a_ = 0;
  clear_has_a();
}
inline ::google::protobuf::int32 ArithRequest::a() const {
  return a_;
}
inline void ArithRequest::set_a(::google::protobuf::int32 value) {
  set_has_a();
  a_ = value;
}

// optional int32 b = 2;
inline bool ArithRequest::has_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ArithRequest::set_has_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ArithRequest::clear_has_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ArithRequest::clear_b() {
  b_ = 0;
  clear_has_b();
}
inline ::google::protobuf::int32 ArithRequest::b() const {
  return b_;
}
inline void ArithRequest::set_b(::google::protobuf::int32 value) {
  set_has_b();
  b_ = value;
}

// -------------------------------------------------------------------

// ArithResponse

// optional int32 c = 1;
inline bool ArithResponse::has_c() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ArithResponse::set_has_c() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ArithResponse::clear_has_c() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ArithResponse::clear_c() {
  c_ = 0;
  clear_has_c();
}
inline ::google::protobuf::int32 ArithResponse::c() const {
  return c_;
}
inline void ArithResponse::set_c(::google::protobuf::int32 value) {
  set_has_c();
  c_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace service

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_arith_2eproto__INCLUDED
