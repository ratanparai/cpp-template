load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        "//src/lib:GreetingLib",
        "@googletest//:gtest_main",
    ],
)
