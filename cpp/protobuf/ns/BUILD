proto_library(
    name = "profiles_proto",
    srcs = ["profiles.proto"],
)

proto_library(
    name = "ns_proto",
    srcs = ["ns.proto"],
    deps = ["@com_google_protobuf//:timestamp_proto",
            "@com_google_protobuf//:empty_proto",
            "//common:common_proto",
            "//gw:gw_proto",
            ":profiles_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_profiles_proto",
    deps = [":profiles_proto"],
)

cpp_proto_compile(
    name = "cpp_ns_proto",
    deps = [":ns_proto"],
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
