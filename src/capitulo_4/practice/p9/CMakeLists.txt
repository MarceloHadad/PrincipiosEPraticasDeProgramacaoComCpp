cmake_minimum_required(VERSION 3.12.0)

project(c4p9)

add_executable(c4p9)

target_include_directories(c4p9 PRIVATE
    ${lib_path})

target_sources(c4p9 PRIVATE
    c4p9.cpp
    ${lib_file})