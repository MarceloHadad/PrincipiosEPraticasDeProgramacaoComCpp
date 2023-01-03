cmake_minimum_required(VERSION 3.12.0)

project(c4e10)

add_executable(c4e10)

target_include_directories(c4e10 PRIVATE
    ${lib_path})

target_sources(c4e10 PRIVATE
    c4e10.cpp
    ${lib_file})