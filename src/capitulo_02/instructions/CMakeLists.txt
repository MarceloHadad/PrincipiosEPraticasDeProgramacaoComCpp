cmake_minimum_required(VERSION 3.12.0)

project(instructions)

add_executable(instructions)

target_include_directories(instructions PRIVATE
    ${lib_path})

target_sources(instructions PRIVATE
    instructions.cpp
    ${lib_file})