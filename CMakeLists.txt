cmake_minimum_required(VERSION 3.6)
project(RPNCalculator)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR})
link_directories(${CMAKE_SOURCE_DIR})

set(SOURCE_FILES main.c Stack.h Stack.c Solver.h Solver.c)
add_executable(RPNCalculator ${SOURCE_FILES})