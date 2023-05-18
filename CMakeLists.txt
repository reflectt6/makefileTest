cmake_minimum_required(VERSION 3.24)
project(makefileTests)

set(CMAKE_CXX_STANDARD 17)

add_executable(makefileTests main.cpp makefile_reuse2/x.c makefile_reuse2/y.c makefile_reuse2/z.c)
