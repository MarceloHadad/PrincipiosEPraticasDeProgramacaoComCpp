cmake_minimum_required(VERSION 3.12.0)

project(c4t4)

add_executable(c4t4)

target_include_directories(c4t4 PRIVATE
    ${lib_path})

target_sources(c4t4 PRIVATE
    c4t4.cpp
    ${lib_file})