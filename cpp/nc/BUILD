proto_library(
    name = "nc_proto",
    srcs = ["nc.proto"],
    deps = ["@com_google_protobuf//:empty_proto",
            "//gw:gw_proto"],
#    visibility = ["//geo:__pkg__"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_nc_proto",
    deps = [":nc_proto"],
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
