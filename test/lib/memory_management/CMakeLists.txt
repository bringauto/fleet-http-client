CMAKE_MINIMUM_REQUIRED(VERSION 3.25 FATAL_ERROR)
PROJECT(fleet-http-client C CXX)

SET(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(fleet-protocol-interface 2.0.0 REQUIRED)

FILE(GLOB_RECURSE memory_management_cpp_files "./source/*")
ADD_LIBRARY(memory_management STATIC ${memory_management_cpp_files})

TARGET_LINK_LIBRARIES(memory_management PUBLIC fleet-protocol-interface::common-headers-interface)