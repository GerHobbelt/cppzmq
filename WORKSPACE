workspace(name = "zmqcpp")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")

http_archive(
    name = "com_github_mvukov_rules_ros",
    sha256 = "bb69387bc134185e42f3e09fede398b7e12a7967b0fcfd6f93eacf890bfcde97",
    strip_prefix = "rules_ros-1.0.10",
    urls = [
        "https://github.com/bearrobotics/rules_ros/archive/refs/tags/v1.0.10.zip",
    ],
)

load("@com_github_mvukov_rules_ros//repositories:repositories.bzl", "ros_repositories")

ros_repositories()

# buildifier: disable=load
load("@com_github_mvukov_rules_ros//repositories:deps.bzl", "ros_deps")

ros_deps(
    python_interpreter = "python",
    python_requirements_lock = "@com_github_mvukov_rules_ros//:requirements_lock.txt",
)

load(
    "@rules_ros_pip_deps//:requirements.bzl",
    install_rules_ros_pip_deps = "install_deps",
)

install_rules_ros_pip_deps()

new_local_repository(
    name = "system_libs",
    build_file_content = """
load("@rules_cc//cc:defs.bzl", "cc_library")
cc_library(
    name = "libzmq",
    srcs = ["libzmq.so"],
    visibility = ["//visibility:public"],
)
""",
    path = "/usr/lib/x86_64-linux-gnu",
)
