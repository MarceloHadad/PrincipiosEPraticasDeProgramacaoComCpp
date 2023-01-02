cmake_minimum_required(VERSION 3.12.0)

project(c4p8)

add_executable(c4p8)

target_include_directories(c4p8 PRIVATE
    ${lib_path})

target_sources(c4p8 PRIVATE
    c4p8.cpp
    ${lib_file})