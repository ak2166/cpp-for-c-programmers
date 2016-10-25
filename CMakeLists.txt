cmake_minimum_required(VERSION 3.6)
project(cpp_for_c_programmers_assignments)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
add_executable(c_conversion src/c_conversion.cpp)
