#include <iostream>

#include <grpcpp/grpcpp.h>
#include "as/external/api/application.grpc.pb.h"
#include "as/external/api/application.pb.h"
#include "google/api/annotations.pb.h"
#include "google/api/http.pb.h"
#include "as/external/api/internal.grpc.pb.h"
#include "as/external/api/internal.pb.h"

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



class AppServiceClient {
  public:
    AppServiceClient(std::shared_ptr<Channel> channel)
      : stub_(ApplicationService::NewStub(channel)) {}

    CreateApplicationResponse Create(CreateApplicationRequest req) {
      //CreateApplicationResponse response = req.application.id;
      CreateApplicationResponse response;
      response.set_id (5);
      return response;
    }

    // This just serves as an example of how we get info from the Application Server.
    std::string getAppDescription (std::string jwt, int appID) {
      // Data we are sending to the server.
      GetApplicationRequest request;
      request.set_id(4);

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
      //request.set_username("username");
      //request.set_password("password");

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
