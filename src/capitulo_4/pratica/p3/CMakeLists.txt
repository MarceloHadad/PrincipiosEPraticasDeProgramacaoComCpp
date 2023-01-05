cmake_minimum_required(VERSION 3.12.0)

project(c4p3)

add_executable(c4p3)

target_include_directories(c4p3 PRIVATE
    ${lib_path})

target_sources(c4p3 PRIVATE
    c4p3.cpp
    ${lib_file})