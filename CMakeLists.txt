cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(hello)
add_executable(hello say_hello.cxx)
add_library(hello_lib STATIC hello_lib.h hello_lib.cxx)
target_link_libraries(hello hello_lib)