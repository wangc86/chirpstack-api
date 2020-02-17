# chirpstack-api w/ C++ support

ChirpStack gRPC API message and service wrappers for C++.

## Introduction

This version uses [Bazel](https://www.bazel.build/) for compilation.

The protobufs here are copied from those in [chirpstack-api v3.1.4](https://github.com/brocaar/chirpstack-api/releases/tag/v3.1.4). 

See ./exampleApp for a C++ example that uses gRPC to access application information (remember to fill-in your ChirpStack Application Server username/password).

```sh
bazel build //exampleApp:mainApp
./bazel-bin/exampleApp/mainApp
```

