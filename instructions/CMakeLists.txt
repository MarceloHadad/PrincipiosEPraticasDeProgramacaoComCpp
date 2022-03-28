cmake_minimum_required(VERSION 3.12.0)

project(instructions)

add_executable(instructions)

target_include_directories(instructions PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(instructions PRIVATE
    instructions.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)