proto_library(
    name = "geo_proto",
    srcs = ["geo.proto"],
    deps = ["//gw:gw_proto",
            "//common:common_proto"],
#    visibility = ["//geo:__pkg__"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_geo_proto",
    deps = [":geo_proto"],
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
