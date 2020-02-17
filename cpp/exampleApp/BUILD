cc_binary(
  name = "mainApp",
  srcs = ["main.cpp"],
  copts = ["-Ibazel-bin/protobuf/as/external/api/application_cpp_grpc_library_pb"],
  deps = ["@com_github_grpc_grpc//:grpc++",
          "//as/external/api:application_cpp_grpc_library",
          "//as/external/api:internal_cpp_grpc_library",
         ],
)

