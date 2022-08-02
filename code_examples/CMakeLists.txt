cmake_minimum_required(VERSION 3.5)

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(code_examples LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-std=c++20 -Wall -Wextra -Werror -Wno-unused-variable -Wno-unused-but-set-variable -pedantic -fsanitize=address,undefined")

set(CMAKE_VERBOSE_MAKEFILE OFF)

add_subdirectory(introduction)
add_subdirectory(algorithms)
add_subdirectory(theory)
add_subdirectory(extras)
add_subdirectory(ranges)
add_subdirectory(views)
