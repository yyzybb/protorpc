// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "wire.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace rpc {
namespace wire {

namespace {

const ::google::protobuf::Descriptor* Header_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Header_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_wire_2eproto() {
  protobuf_AddDesc_wire_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "wire.proto");
  GOOGLE_CHECK(file != NULL);
  Header_descriptor_ = file->message_type(0);
  static const int Header_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, method_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, error_),
  };
  Header_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Header_descriptor_,
      Header::default_instance_,
      Header_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Header, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Header));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_wire_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Header_descriptor_, &Header::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_wire_2eproto() {
  delete Header::default_instance_;
  delete Header_reflection_;
}

void protobuf_AddDesc_wire_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nwire.proto\022\030google.protobuf.rpc.wire\"4"
    "\n\006Header\022\016\n\006method\030\001 \001(\t\022\013\n\003seq\030\002 \001(\004\022\r\n"
    "\005error\030\003 \001(\t", 92);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "wire.proto", &protobuf_RegisterTypes);
  Header::default_instance_ = new Header();
  Header::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_wire_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_wire_2eproto {
  StaticDescriptorInitializer_wire_2eproto() {
    protobuf_AddDesc_wire_2eproto();
  }
} static_descriptor_initializer_wire_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int Header::kMethodFieldNumber;
const int Header::kSeqFieldNumber;
const int Header::kErrorFieldNumber;
#endif  // !_MSC_VER

Header::Header()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Header::InitAsDefaultInstance() {
}

Header::Header(const Header& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Header::SharedCtor() {
  _cached_size_ = 0;
  method_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  seq_ = GOOGLE_ULONGLONG(0);
  error_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Header::~Header() {
  SharedDtor();
}

void Header::SharedDtor() {
  if (method_ != &::google::protobuf::internal::kEmptyString) {
    delete method_;
  }
  if (error_ != &::google::protobuf::internal::kEmptyString) {
    delete error_;
  }
  if (this != default_instance_) {
  }
}

void Header::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Header::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Header_descriptor_;
}

const Header& Header::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_wire_2eproto();  return *default_instance_;
}

Header* Header::default_instance_ = NULL;

Header* Header::New() const {
  return new Header;
}

void Header::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_method()) {
      if (method_ != &::google::protobuf::internal::kEmptyString) {
        method_->clear();
      }
    }
    seq_ = GOOGLE_ULONGLONG(0);
    if (has_error()) {
      if (error_ != &::google::protobuf::internal::kEmptyString) {
        error_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Header::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string method = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->method().data(), this->method().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_seq;
        break;
      }
      
      // optional uint64 seq = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seq_)));
          set_has_seq();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_error;
        break;
      }
      
      // optional string error = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_error:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->error().data(), this->error().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Header::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string method = 1;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->method(), output);
  }
  
  // optional uint64 seq = 2;
  if (has_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->seq(), output);
  }
  
  // optional string error = 3;
  if (has_error()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->error().data(), this->error().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->error(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Header::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string method = 1;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->method(), target);
  }
  
  // optional uint64 seq = 2;
  if (has_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->seq(), target);
  }
  
  // optional string error = 3;
  if (has_error()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->error().data(), this->error().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->error(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Header::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string method = 1;
    if (has_method()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method());
    }
    
    // optional uint64 seq = 2;
    if (has_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->seq());
    }
    
    // optional string error = 3;
    if (has_error()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->error());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Header::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Header* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Header*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Header::MergeFrom(const Header& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_method()) {
      set_method(from.method());
    }
    if (from.has_seq()) {
      set_seq(from.seq());
    }
    if (from.has_error()) {
      set_error(from.error());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Header::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Header::CopyFrom(const Header& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Header::IsInitialized() const {
  
  return true;
}

bool Header::ParseFromXmlString(const std::string& data) {
  ::google::protobuf::xml::XmlMessage stub(*const_cast<Header*>(this));
  if(!stub.ParseFromString(data)) {
    GOOGLE_LOG(WARNING) << "ParseFromXmlString failed: " << stub.GetErrorText();
    return false;
  }
  if (!this->IsInitialized()) {
    GOOGLE_LOG(WARNING)
      << "ParseFromXmlString failed: missing required fields: "
      << this->InitializationErrorString();
    return false;
  }
  return true;
}

bool Header::ParsePartialFromXmlString(const std::string& data) {
  ::google::protobuf::xml::XmlMessage stub(*const_cast<Header*>(this));
  if(!stub.ParseFromString(data)) {
    GOOGLE_LOG(WARNING) << "ParsePartialFromXmlString failed: " << stub.GetErrorText();
    return false;
  }
  return true;
}

bool Header::SerializeToXmlString(std::string* output) const {
  output->clear();
  if (!this->IsInitialized()) {
    GOOGLE_LOG(WARNING)
      << "SerializeToXmlString failed: missing required fields: "
      << this->InitializationErrorString();
    return false;
  }
  
  ::google::protobuf::xml::XmlMessage stub(*const_cast<Header*>(this));
  output->assign(stub.SerializeToString());
  return true;
}

bool Header::SerializePartialToXmlString(std::string* output) const {
  output->clear();
  
  ::google::protobuf::xml::XmlMessage stub(*const_cast<Header*>(this));
  output->assign(stub.SerializeToString());
  return true;
}

void Header::Swap(Header* other) {
  if (other != this) {
    std::swap(method_, other->method_);
    std::swap(seq_, other->seq_);
    std::swap(error_, other->error_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Header::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Header_descriptor_;
  metadata.reflection = Header_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace wire
}  // namespace rpc
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)