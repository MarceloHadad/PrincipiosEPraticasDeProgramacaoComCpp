cmake_minimum_required(VERSION 3.12.0)

project(c4t2)

add_executable(c4t2)

target_include_directories(c4t2 PRIVATE
    ${lib_path})

target_sources(c4t2 PRIVATE
    c4t2.cpp
    ${lib_file})