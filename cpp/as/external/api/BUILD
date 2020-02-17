package(default_visibility=['//visibility:public'])

proto_library(
    name = "application_proto",
    srcs = ["application.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:empty_proto"],
)

proto_library(
    name = "deviceProfile_proto",
    srcs = ["deviceProfile.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            ":profiles_proto"],
)

proto_library(
    name = "device_proto",
    srcs = ["device.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            "//common:common_proto",
            ":frameLog_proto"],
)

proto_library(
    name = "deviceQueue_proto",
    srcs = ["deviceQueue.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:empty_proto"],
)

proto_library(
    name = "frameLog_proto",
    srcs = ["frameLog.proto"],
    deps = ["@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:duration_proto",
            "//common:common_proto",
            "//gw:gw_proto"],
)

proto_library(
    name = "fuotaDeployment_proto",
    srcs = ["fuotaDeployment.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:duration_proto",
            ":multicastGroup_proto"],
)

proto_library(
    name = "gatewayProfile_proto",
    srcs = ["gatewayProfile.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            "//common:common_proto"],
)

proto_library(
    name = "gateway_proto",
    srcs = ["gateway.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            "//common:common_proto",
            ":frameLog_proto"],
)

proto_library(
    name = "internal_proto",
    srcs = ["internal.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            ":user_proto"],
)

proto_library(
    name = "multicastGroup_proto",
    srcs = ["multicastGroup.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto"],
)

proto_library(
    name = "networkServer_proto",
    srcs = ["networkServer.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto"],
)

proto_library(
    name = "organization_proto",
    srcs = ["organization.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto"],
)

proto_library(
    name = "profiles_proto",
    srcs = ["profiles.proto"],
)

proto_library(
    name = "serviceProfile_proto",
    srcs = ["serviceProfile.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            ":profiles_proto"],
)

proto_library(
    name = "user_proto",
    srcs = ["user.proto"],
    deps = ["@googleapi//:annotations_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_application_proto",
    deps = [":application_proto"],
)

cpp_proto_compile(
    name = "cpp_deviceProfile_proto",
    deps = [":deviceProfile_proto"],
)

cpp_proto_compile(
    name = "cpp_device_proto",
    deps = [":device_proto"],
)

cpp_proto_compile(
    name = "cpp_deviceQueue_proto",
    deps = [":deviceQueue_proto"],
)

cpp_proto_compile(
    name = "cpp_frameLog_proto",
    deps = [":frameLog_proto"],
)

cpp_proto_compile(
    name = "cpp_fuotaDeployment_proto",
    deps = [":fuotaDeployment_proto"],
)

cpp_proto_compile(
    name = "cpp_gatewayProfile_proto",
    deps = [":gatewayProfile_proto"],
)

cpp_proto_compile(
    name = "cpp_gateway_proto",
    deps = [":gateway_proto"],
)

cpp_proto_compile(
    name = "cpp_internal_proto",
    deps = [":internal_proto"],
)

cpp_proto_compile(
    name = "cpp_multicastGroup_proto",
    deps = [":multicastGroup_proto"],
)

cpp_proto_compile(
    name = "cpp_networkServer_proto",
    deps = [":networkServer_proto"],
)

cpp_proto_compile(
    name = "cpp_organization_proto",
    deps = [":organization_proto"],
)

cpp_proto_compile(
    name = "cpp_profiles_proto",
    deps = [":profiles_proto"],
)

cpp_proto_compile(
    name = "cpp_serviceProfile_proto",
    deps = [":serviceProfile_proto"],
)

cpp_proto_compile(
    name = "cpp_user_proto",
    deps = [":user_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "cpp_application_library",
    deps = [":application_proto"],
)

cpp_proto_library(
    name = "cpp_deviceProfile_library",
    deps = [":deviceProfile_proto"],
)

cpp_proto_library(
    name = "cpp_device_library",
    deps = [":device_proto"],
)

cpp_proto_library(
    name = "cpp_deviceQueue_library",
    deps = [":deviceQueue_proto"],
)

cpp_proto_library(
    name = "cpp_frameLog_library",
    deps = [":frameLog_proto"],
)

cpp_proto_library(
    name = "cpp_fuotaDeployment_library",
    deps = [":fuotaDeployment_proto"],
)

cpp_proto_library(
    name = "cpp_gatewayProfile_library",
    deps = [":gatewayProfile_proto"],
)

cpp_proto_library(
    name = "cpp_gateway_library",
    deps = [":gateway_proto"],
)

cpp_proto_library(
    name = "cpp_internal_library",
    deps = [":internal_proto"],
)

cpp_proto_library(
    name = "cpp_multicastGroup_library",
    deps = [":multicastGroup_proto"],
)

cpp_proto_library(
    name = "cpp_networkServer_library",
    deps = [":networkServer_proto"],
)

cpp_proto_library(
    name = "cpp_organization_library",
    deps = [":organization_proto"],
)

cpp_proto_library(
    name = "cpp_profiles_library",
    deps = [":profiles_proto"],
)

cpp_proto_library(
    name = "cpp_serviceProfile_library",
    deps = [":serviceProfile_proto"],
)

cpp_proto_library(
    name = "cpp_user_library",
    deps = [":user_proto"],
)

cpp_proto_library(
    name = "cpp_externalApi_library",
    deps = [":application_proto",
            ":deviceProfile_proto",
            ":device_proto",
            ":deviceQueue_proto",
            ":frameLog_proto",
            ":fuotaDeployment_proto",
            ":gatewayProfile_proto",
            ":gateway_proto",
            ":internal_proto",
            ":multicastGroup_proto",
            ":networkServer_proto",
            ":organization_proto",
            ":profiles_proto",
            ":serviceProfile_proto",
            ":user_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_grpc_compile")

cpp_grpc_compile(
    name = "application_cpp_grpc",
    deps = [":application_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_grpc_library")

cpp_grpc_library(
    name = "application_cpp_grpc_library",
    deps = [":application_proto"],
)

cpp_grpc_library(
    name = "internal_cpp_grpc_library",
    deps = [":internal_proto"],
)
