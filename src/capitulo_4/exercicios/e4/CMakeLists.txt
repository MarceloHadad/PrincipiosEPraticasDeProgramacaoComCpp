cmake_minimum_required(VERSION 3.12.0)

project(c4e4)

add_executable(c4e4)

target_include_directories(c4e4 PRIVATE
    ${lib_path})

target_sources(c4e4 PRIVATE
    c4e4.cpp
    ${lib_file})