#include "ProtoDisableWarning.h"
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ai/inworld/engine/v1/feedback.proto

#include "ai/inworld/engine/v1/feedback.pb.h"
#include "ai/inworld/engine/v1/feedback.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace ai {
namespace inworld {
namespace engine {
namespace v1 {

static const char* Feedback_method_names[] = {
  "/ai.inworld.engine.v1.Feedback/CreateInteractionFeedback",
  "/ai.inworld.engine.v1.Feedback/DeleteInteractionFeedback",
};

std::unique_ptr< Feedback::Stub> Feedback::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Feedback::Stub> stub(new Feedback::Stub(channel));
  return stub;
}

Feedback::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateInteractionFeedback_(Feedback_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteInteractionFeedback_(Feedback_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Feedback::Stub::CreateInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest& request, ::ai::inworld::engine::v1::InteractionFeedback* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest, ::ai::inworld::engine::v1::InteractionFeedback, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_CreateInteractionFeedback_, context, request, response);
}

void Feedback::Stub::experimental_async::CreateInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest* request, ::ai::inworld::engine::v1::InteractionFeedback* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest, ::ai::inworld::engine::v1::InteractionFeedback, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInteractionFeedback_, context, request, response, std::move(f));
}

void Feedback::Stub::experimental_async::CreateInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest* request, ::ai::inworld::engine::v1::InteractionFeedback* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateInteractionFeedback_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::v1::InteractionFeedback>* Feedback::Stub::PrepareAsyncCreateInteractionFeedbackRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::ai::inworld::engine::v1::InteractionFeedback, ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_CreateInteractionFeedback_, context, request);
}

::grpc::ClientAsyncResponseReader< ::ai::inworld::engine::v1::InteractionFeedback>* Feedback::Stub::AsyncCreateInteractionFeedbackRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateInteractionFeedbackRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Feedback::Stub::DeleteInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest& request, ::google::protobuf_inworld::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall< ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), rpcmethod_DeleteInteractionFeedback_, context, request, response);
}

void Feedback::Stub::experimental_async::DeleteInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest* request, ::google::protobuf_inworld::Empty* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteInteractionFeedback_, context, request, response, std::move(f));
}

void Feedback::Stub::experimental_async::DeleteInteractionFeedback(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest* request, ::google::protobuf_inworld::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_DeleteInteractionFeedback_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Feedback::Stub::PrepareAsyncDeleteInteractionFeedbackRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf_inworld::Empty, ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(channel_.get(), cq, rpcmethod_DeleteInteractionFeedback_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf_inworld::Empty>* Feedback::Stub::AsyncDeleteInteractionFeedbackRaw(::grpc::ClientContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteInteractionFeedbackRaw(context, request, cq);
  result->StartCall();
  return result;
}

Feedback::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Feedback_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Feedback::Service, ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest, ::ai::inworld::engine::v1::InteractionFeedback, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Feedback::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest* req,
             ::ai::inworld::engine::v1::InteractionFeedback* resp) {
               return service->CreateInteractionFeedback(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Feedback_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Feedback::Service, ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest, ::google::protobuf_inworld::Empty, ::grpc::protobuf_inworld::MessageLite, ::grpc::protobuf_inworld::MessageLite>(
          [](Feedback::Service* service,
             ::grpc::ServerContext* ctx,
             const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest* req,
             ::google::protobuf_inworld::Empty* resp) {
               return service->DeleteInteractionFeedback(ctx, req, resp);
             }, this)));
}

Feedback::Service::~Service() {
}

::grpc::Status Feedback::Service::CreateInteractionFeedback(::grpc::ServerContext* context, const ::ai::inworld::engine::v1::CreateInteractionFeedbackRequest* request, ::ai::inworld::engine::v1::InteractionFeedback* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Feedback::Service::DeleteInteractionFeedback(::grpc::ServerContext* context, const ::ai::inworld::engine::v1::DeleteInteractionFeedbackRequest* request, ::google::protobuf_inworld::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace ai
}  // namespace inworld
}  // namespace engine
}  // namespace v1

