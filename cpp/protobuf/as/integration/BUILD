proto_library(
    name = "integration_proto",
    srcs = ["integration.proto"],
    deps = ["//common:common_proto",
            "//gw:gw_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_integration_proto",
    deps = [":integration_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "cpp_integration_library",
    deps = [":integration_proto"],
)

#load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")
#
#grpc_deps()
#
#cc_proto_compile(
#    name = "appIntegration",
#    protos = ["integration.proto",],
#    with_grpc = True,
#)
