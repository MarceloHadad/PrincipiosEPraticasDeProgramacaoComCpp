cmake_minimum_required(VERSION 3.12.0)

project(c4e8)

add_executable(c4e8)

target_include_directories(c4e8 PRIVATE
    ${lib_path})

target_sources(c4e8 PRIVATE
    c4e8.cpp
    ${lib_file})