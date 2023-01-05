cmake_minimum_required(VERSION 3.12.0)

project(c4p2)

add_executable(c4p2)

target_include_directories(c4p2 PRIVATE
    ${lib_path})

target_sources(c4p2 PRIVATE
    c4p2.cpp
    ${lib_file})