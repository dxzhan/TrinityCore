// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: challenge_service.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "challenge_service.pb.h"

#include <utility>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include "BattlenetRpcErrorCodes.h"
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {
namespace challenge {
namespace v1 {

namespace {

const ::google::protobuf::Descriptor* ChallengeExternalRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChallengeExternalRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* ChallengeExternalResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ChallengeExternalResult_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* ChallengeListener_descriptor_ = NULL;

}  // namespace

void protobuf_AssignDesc_challenge_5fservice_2eproto() {
  protobuf_AddDesc_challenge_5fservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "challenge_service.proto");
  GOOGLE_CHECK(file != NULL);
  ChallengeExternalRequest_descriptor_ = file->message_type(0);
  static const int ChallengeExternalRequest_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalRequest, request_token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalRequest, payload_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalRequest, payload_),
  };
  ChallengeExternalRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ChallengeExternalRequest_descriptor_,
      ChallengeExternalRequest::default_instance_,
      ChallengeExternalRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ChallengeExternalRequest));
  ChallengeExternalResult_descriptor_ = file->message_type(1);
  static const int ChallengeExternalResult_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalResult, request_token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalResult, passed_),
  };
  ChallengeExternalResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ChallengeExternalResult_descriptor_,
      ChallengeExternalResult::default_instance_,
      ChallengeExternalResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ChallengeExternalResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ChallengeExternalResult));
  ChallengeListener_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_challenge_5fservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ChallengeExternalRequest_descriptor_, &ChallengeExternalRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ChallengeExternalResult_descriptor_, &ChallengeExternalResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_challenge_5fservice_2eproto() {
  delete ChallengeExternalRequest::default_instance_;
  delete ChallengeExternalRequest_reflection_;
  delete ChallengeExternalResult::default_instance_;
  delete ChallengeExternalResult_reflection_;
}

void protobuf_AddDesc_challenge_5fservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::bgs::protocol::protobuf_AddDesc_rpc_5ftypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027challenge_service.proto\022\031bgs.protocol."
    "challenge.v1\032\017rpc_types.proto\"X\n\030Challen"
    "geExternalRequest\022\025\n\rrequest_token\030\001 \001(\t"
    "\022\024\n\014payload_type\030\002 \001(\t\022\017\n\007payload\030\003 \001(\014\""
    "F\n\027ChallengeExternalResult\022\025\n\rrequest_to"
    "ken\030\001 \001(\t\022\024\n\006passed\030\002 \001(\010:\004true2\257\002\n\021Chal"
    "lengeListener\022m\n\023OnExternalChallenge\0223.b"
    "gs.protocol.challenge.v1.ChallengeExtern"
    "alRequest\032\031.bgs.protocol.NO_RESPONSE\"\006\202\371"
    "+\002\010\003\022r\n\031OnExternalChallengeResult\0222.bgs."
    "protocol.challenge.v1.ChallengeExternalR"
    "esult\032\031.bgs.protocol.NO_RESPONSE\"\006\202\371+\002\010\004"
    "\0327\202\371++\n\'bnet.protocol.challenge.Challeng"
    "eNotify8\001\212\371+\004\010\001 \001B\005H\002\200\001\000", 544);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "challenge_service.proto", &protobuf_RegisterTypes);
  ChallengeExternalRequest::default_instance_ = new ChallengeExternalRequest();
  ChallengeExternalResult::default_instance_ = new ChallengeExternalResult();
  ChallengeExternalRequest::default_instance_->InitAsDefaultInstance();
  ChallengeExternalResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_challenge_5fservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_challenge_5fservice_2eproto {
  StaticDescriptorInitializer_challenge_5fservice_2eproto() {
    protobuf_AddDesc_challenge_5fservice_2eproto();
  }
} static_descriptor_initializer_challenge_5fservice_2eproto_;
// ===================================================================

#ifndef _MSC_VER
const int ChallengeExternalRequest::kRequestTokenFieldNumber;
const int ChallengeExternalRequest::kPayloadTypeFieldNumber;
const int ChallengeExternalRequest::kPayloadFieldNumber;
#endif  // !_MSC_VER

ChallengeExternalRequest::ChallengeExternalRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.challenge.v1.ChallengeExternalRequest)
}

void ChallengeExternalRequest::InitAsDefaultInstance() {
}

ChallengeExternalRequest::ChallengeExternalRequest(const ChallengeExternalRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.challenge.v1.ChallengeExternalRequest)
}

void ChallengeExternalRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payload_type_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  payload_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChallengeExternalRequest::~ChallengeExternalRequest() {
  // @@protoc_insertion_point(destructor:bgs.protocol.challenge.v1.ChallengeExternalRequest)
  SharedDtor();
}

void ChallengeExternalRequest::SharedDtor() {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete request_token_;
  }
  if (payload_type_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete payload_type_;
  }
  if (payload_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete payload_;
  }
  if (this != default_instance_) {
  }
}

void ChallengeExternalRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChallengeExternalRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChallengeExternalRequest_descriptor_;
}

const ChallengeExternalRequest& ChallengeExternalRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_challenge_5fservice_2eproto();
  return *default_instance_;
}

ChallengeExternalRequest* ChallengeExternalRequest::default_instance_ = NULL;

ChallengeExternalRequest* ChallengeExternalRequest::New() const {
  return new ChallengeExternalRequest;
}

void ChallengeExternalRequest::Swap(ChallengeExternalRequest* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata ChallengeExternalRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChallengeExternalRequest_descriptor_;
  metadata.reflection = ChallengeExternalRequest_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int ChallengeExternalResult::kRequestTokenFieldNumber;
const int ChallengeExternalResult::kPassedFieldNumber;
#endif  // !_MSC_VER

ChallengeExternalResult::ChallengeExternalResult()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:bgs.protocol.challenge.v1.ChallengeExternalResult)
}

void ChallengeExternalResult::InitAsDefaultInstance() {
}

ChallengeExternalResult::ChallengeExternalResult(const ChallengeExternalResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:bgs.protocol.challenge.v1.ChallengeExternalResult)
}

void ChallengeExternalResult::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  request_token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  passed_ = true;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ChallengeExternalResult::~ChallengeExternalResult() {
  // @@protoc_insertion_point(destructor:bgs.protocol.challenge.v1.ChallengeExternalResult)
  SharedDtor();
}

void ChallengeExternalResult::SharedDtor() {
  if (request_token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete request_token_;
  }
  if (this != default_instance_) {
  }
}

void ChallengeExternalResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChallengeExternalResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChallengeExternalResult_descriptor_;
}

const ChallengeExternalResult& ChallengeExternalResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_challenge_5fservice_2eproto();
  return *default_instance_;
}

ChallengeExternalResult* ChallengeExternalResult::default_instance_ = NULL;

ChallengeExternalResult* ChallengeExternalResult::New() const {
  return new ChallengeExternalResult;
}

void ChallengeExternalResult::Swap(ChallengeExternalResult* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata ChallengeExternalResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ChallengeExternalResult_descriptor_;
  metadata.reflection = ChallengeExternalResult_reflection_;
  return metadata;
}

// ===================================================================

ChallengeListener::ChallengeListener(bool use_original_hash) : ServiceBase(use_original_hash ? OriginalHash::value : NameHash::value) {
}

ChallengeListener::~ChallengeListener() {
}

google::protobuf::ServiceDescriptor const* ChallengeListener::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ChallengeListener_descriptor_;
}

void ChallengeListener::OnExternalChallenge(::bgs::protocol::challenge::v1::ChallengeExternalRequest const* request, bool client /*= false*/, bool server /*= false*/) {
  LogCallClientMethod("ChallengeListener.OnExternalChallenge", "bgs.protocol.challenge.v1.ChallengeExternalRequest", request);
  SendRequest(service_hash_, 3 | (client ? 0x40000000 : 0) | (server ? 0x80000000 : 0), request);
}

void ChallengeListener::OnExternalChallengeResult(::bgs::protocol::challenge::v1::ChallengeExternalResult const* request, bool client /*= false*/, bool server /*= false*/) {
  LogCallClientMethod("ChallengeListener.OnExternalChallengeResult", "bgs.protocol.challenge.v1.ChallengeExternalResult", request);
  SendRequest(service_hash_, 4 | (client ? 0x40000000 : 0) | (server ? 0x80000000 : 0), request);
}

void ChallengeListener::CallServerMethod(uint32 /*token*/, uint32 methodId, MessageBuffer /*buffer*/) {
  LogDisallowedMethod(methodId);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace challenge
}  // namespace protocol
}  // namespace bgs

// @@protoc_insertion_point(global_scope)
