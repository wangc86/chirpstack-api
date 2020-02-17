proto_library(
    name = "as_proto",
    srcs = ["as.proto"],
    deps = ["@com_google_protobuf//:empty_proto",
            "@com_google_protobuf//:timestamp_proto",
            "//common:common_proto",
            "//gw:gw_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_as_proto",
    deps = [":as_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "cpp_as_library",
    deps = [":as_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_grpc_compile")

cpp_grpc_compile(
    name = "cpp_as_grpc",
    deps = [":as_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_grpc_library")

cpp_grpc_library(
    name = "grpc_library_as",
    deps = [":as_proto"],
)
