cmake_minimum_required(VERSION 3.12.0)

project(instructions)
add_definitions(-DUNICODE -D_UNICODE)

add_executable(instructions)

source_group("Instructions")

target_sources(instructions PRIVATE
    instructions.cpp
    std_lib_facilities.h)