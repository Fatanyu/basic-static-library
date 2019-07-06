cmake_minimum_required(VERSION 3.14)
project(basic_static_library)

set(CMAKE_CXX_STANDARD 17)

add_library(basic_static_library library.cpp library.h)