cmake_minimum_required(VERSION 3.0)

project(selection_sort)

add_executable(main main.cpp)

# Compilation optimization
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")