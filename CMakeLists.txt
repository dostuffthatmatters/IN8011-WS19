cmake_minimum_required(VERSION 3.13)
project(tutorial-repository C)

set(CMAKE_C_STANDARD 99)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Werror")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")


add_executable(13_bitwise
        tutorial-13/example_13_1_bitwise.c)