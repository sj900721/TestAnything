cmake_minimum_required(VERSION 3.12)
project(test_anything)

include_directories(/usr/include/curlpp)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

link_libraries(curlpp curl)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_anything main.cpp Queue.h QueueTest.cpp)

target_link_libraries(test_anything gtest gtest_main)
