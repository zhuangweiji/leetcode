cmake_minimum_required(VERSION 3.0.0)
project(MYFIRSTCMAKE VERSION 0.1.0)

set(CMAKE_BUILD_TYPE "Debug")

add_executable(main main.cpp swap.cpp)