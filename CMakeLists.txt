cmake_minimum_required(VERSION 3.14)
project(basic_static_library)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic -Wall -Wextra")

add_library(basic_static_library logging/library.cpp logging/library.h exceptions/Exception.cpp exceptions/Exception.hpp)