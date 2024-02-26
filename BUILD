load("@com_github_mvukov_rules_ros//ros:cc_defs.bzl", "cc_ros_library")

cc_ros_library(
    name = "cppzmq",
    hdrs = ["include/zmq.hpp", "include/zmq_addon.hpp"],
    includes = [
        "include",
    ],
    visibility = [
        "//visibility:public",
    ],
    deps = [
        "@ros_comm//:roscpp_lib",
        "@system_libs//:libzmq",
    ],
)