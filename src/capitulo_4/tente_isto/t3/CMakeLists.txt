cmake_minimum_required(VERSION 3.12.0)

project(c4t3)

add_executable(c4t3)

target_include_directories(c4t3 PRIVATE
    ${lib_path})

target_sources(c4t3 PRIVATE
    c4t3.cpp
    ${lib_file})