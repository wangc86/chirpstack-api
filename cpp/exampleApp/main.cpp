#include <iostream>

#include <grpcpp/grpcpp.h>
#include "as/external/api/application.grpc.pb.h"
#include "as/external/api/application.pb.h"
#include "google/api/annotations.pb.h"
#include "google/api/http.pb.h"
#include "as/external/api/internal.grpc.pb.h"
#include "as/external/api/internal.pb.h"
#include "as/external/api/device.grpc.pb.h"
#include "as/external/api/device.pb.h"

//using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using api::ApplicationService;

using api::CreateApplicationRequest;
using api::CreateApplicationResponse;

using api::GetApplicationRequest;
using api::GetApplicationResponse;

using api::InternalService;
using api::LoginRequest;
using api::LoginResponse;

using api::DeviceService;
using api::StreamDeviceEventLogsRequest;
using api::StreamDeviceEventLogsResponse;


class AppServiceClient {
  public:
    AppServiceClient(std::shared_ptr<Channel> channel)
      : stub_(ApplicationService::NewStub(channel)) {}

    // This just serves as an example of how we get info from the Application Server.
    std::string getAppDescription (std::string jwt, int appID) {
      // Data we are sending to the server.
      GetApplicationRequest request;
      request.set_id(appID);

      // Container for the data we expect from the server.
      GetApplicationResponse response;

      // Context for the client. It could be used to convey extra information to
      // the server and/or tweak certain RPC behaviors.
      ClientContext context;
      context.AddMetadata("authorization", jwt);

      // The actual RPC.
      Status status = stub_->Get (&context, request, &response);
      if (status.ok()) {
        return response.application().description();
      } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return "RPC failed";
      }
    }

  private:
    std::unique_ptr<ApplicationService::Stub> stub_;
};

class InternalServiceClient {
  public:
    InternalServiceClient(std::shared_ptr<Channel> channel)
      : stub_(InternalService::NewStub(channel)) {}

    std::string GetJWT() {
      // Data we are sending to the server.
      LoginRequest request;

      // Uncomment the following two...
      std::string username, password;
      std::cout << "enter username: ";
      std::cin >> username ;
      request.set_username(username);
      std::cout << "enter password: ";
      std::cin >> password;
      request.set_password(password);

      // Context for the client. It could be used to convey extra information to
      // the server and/or tweak certain RPC behaviors.
      ClientContext context;

      // The actual RPC.
      Status status = stub_->Login (&context, request, &response);
      if (status.ok()) {
        return response.jwt();
      } else {
        std::cout << status.error_code() << ": " << status.error_message()
                  << std::endl;
        return "RPC failed";
      }
    }

  private:
    std::unique_ptr<InternalService::Stub> stub_;

    // Container for the data we expect from the server.
    LoginResponse response;
};

//class DeviceServiceClient {
//  public:
//    DeviceServiceClient(std::shared_ptr<Channel> channel)
//      : stub_(DeviceService::NewStub(channel)) {}
//
//  private:
//    std::unique_ptr<DeviceService::Stub> stub_;
//};


int main(){
  InternalServiceClient insider(grpc::CreateChannel(
    "0.0.0.0:8080", grpc::InsecureChannelCredentials()));
  std::string jwt;
  jwt = insider.GetJWT();
//  std::cout << jwt << std::endl;
//  metadata.set("authorization", insider.GetJWT());

  AppServiceClient agentAdam(grpc::CreateChannel(
    "0.0.0.0:8080", grpc::InsecureChannelCredentials()));

  int applicationId = 4;
  std::cout << agentAdam.getAppDescription (jwt, applicationId) << std::endl;
  
  return 0;
}
