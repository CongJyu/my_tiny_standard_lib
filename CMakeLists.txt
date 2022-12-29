cmake_minimum_required(VERSION 3.24)
project(my_tiny_standard_lib)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_tiny_standard_lib main.cpp MyTinyVector.h)
