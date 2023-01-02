cmake_minimum_required(VERSION 3.12.0)

project(c4p10)

add_executable(c4p10)

target_include_directories(c4p10 PRIVATE
    ${lib_path})

target_sources(c4p10 PRIVATE
    c4p10.cpp
    ${lib_file})