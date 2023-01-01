cmake_minimum_required(VERSION 3.12.0)

project(c4t6)

add_executable(c4t6)

target_include_directories(c4t6 PRIVATE
    ${lib_path})

target_sources(c4t6 PRIVATE
    c4t6.cpp
    ${lib_file})