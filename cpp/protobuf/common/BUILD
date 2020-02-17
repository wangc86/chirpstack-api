proto_library(
    name = "common_proto",
    srcs = ["common.proto"],
    visibility = ["//gw:__pkg__",
                  "//geo:__pkg__",
                  "//ns:__pkg__",
                  "//as:__pkg__",
                  "//as/integration:__pkg__",
                  "//as/external/api:__pkg__"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_compile")

cpp_proto_compile(
    name = "cpp_common_proto",
    deps = [":common_proto"],
)

load("@rules_proto_grpc//cpp:defs.bzl", "cpp_proto_library")

cpp_proto_library(
    name = "cpp_common_library",
    deps = [":common_proto"],
)

