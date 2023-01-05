cmake_minimum_required(VERSION 3.12.0)

project(c4p1)

add_executable(c4p1)

target_include_directories(c4p1 PRIVATE
    ${lib_path})

target_sources(c4p1 PRIVATE
    c4p1.cpp
    ${lib_file})