cmake_minimum_required(VERSION 3.5)

project(code_examples LANGUAGES CXX)

set(CMAKE_C_COMPILER "clang-14")
set(CMAKE_CXX_COMPILER "clang++-14")

set(CMAKE_CXX_FLAGS "-std=c++20 -Wall -Wextra -Werror -Wno-unused-variable -pedantic -fsanitize=address,undefined")

set(CMAKE_VERBOSE_MAKEFILE OFF)

add_subdirectory(introduction)
add_subdirectory(algorithms)
