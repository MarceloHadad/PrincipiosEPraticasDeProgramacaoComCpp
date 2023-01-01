cmake_minimum_required(VERSION 3.12.0)

project(c4t5)

add_executable(c4t5)

target_include_directories(c4t5 PRIVATE
    ${lib_path})

target_sources(c4t5 PRIVATE
    c4t5.cpp
    ${lib_file})