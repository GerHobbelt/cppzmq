load("@com_github_mvukov_rules_ros//ros:cc_defs.bzl", "cc_ros_library")

cc_ros_library(
    name = "cppzmq",
    hdrs = ["include/zmq.hpp", "include/zqm_addon.hpp"],
    includes = [
        "include",
    ],
    visibility = [
        "//ros/base_board:__subpackages__",
    ],
    deps = [
        "@ros_comm//:roscpp_lib",
        "@system_libs//:libzmq",
    ],
)