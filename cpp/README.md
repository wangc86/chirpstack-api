# chirpstack-api with C++ support

ChirpStack gRPC API message and service wrappers for C++.

## Introduction

This version uses [Bazel](https://www.bazel.build/) for compilation.

The protobufs here are copied from those in [chirpstack-api v3.1.4](https://github.com/brocaar/chirpstack-api/releases/tag/v3.1.4). 

exampleQuery: demonstrating the use of gRPC to query application information:

```sh
bazel build //exampleQuery:query
./bazel-bin/exampleQuery/query
```

exampleStreaming: making use of a debugging feature to stream device data:

```sh
bazel build //exampleStreaming:streaming
./bazel-bin/exampleStreaming/streaming
```
