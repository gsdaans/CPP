cmake_minimum_required(VERSION 3.0)

project(set_functions)

add_executable(main main.cc)

# Compilation optimization
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")