cmake_minimum_required(VERSION 3.12.0)

project(c4e9)

add_executable(c4e9)

target_include_directories(c4e9 PRIVATE
    ${lib_path})

target_sources(c4e9 PRIVATE
    c4e9.cpp
    ${lib_file})