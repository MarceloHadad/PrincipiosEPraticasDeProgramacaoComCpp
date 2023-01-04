cmake_minimum_required(VERSION 3.12.0)

project(c4e15)

add_executable(c4e15)

target_include_directories(c4e15 PRIVATE
    ${lib_path})

target_sources(c4e15 PRIVATE
    c4e15.cpp
    ${lib_file})