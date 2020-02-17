proto_library(
    name = "gw_proto",
    srcs = ["gw.proto"],
    deps = ["//common:common_proto",
            "@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:duration_proto"],
    visibility = ["//geo:__pkg__",
                  "//nc:__pkg__",
                  "//ns:__pkg__",
                  "//as:__pkg__",
                  "//as/integration:__pkg__",
                  "//as/external/api:__pkg__"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_gw_proto",
    deps = [":gw_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "cpp_gw_library",
    deps = [":gw_proto"],
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
