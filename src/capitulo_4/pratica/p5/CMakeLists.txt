cmake_minimum_required(VERSION 3.12.0)

project(c4p5)

add_executable(c4p5)

target_include_directories(c4p5 PRIVATE
    ${lib_path})

target_sources(c4p5 PRIVATE
    c4p5.cpp
    ${lib_file})