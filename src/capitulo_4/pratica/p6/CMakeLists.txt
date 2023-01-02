cmake_minimum_required(VERSION 3.12.0)

project(c4p6)

add_executable(c4p6)

target_include_directories(c4p6 PRIVATE
    ${lib_path})

target_sources(c4p6 PRIVATE
    c4p6.cpp
    ${lib_file})