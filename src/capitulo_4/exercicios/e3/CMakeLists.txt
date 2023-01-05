cmake_minimum_required(VERSION 3.12.0)

project(c4e3)

add_executable(c4e3)

target_include_directories(c4e3 PRIVATE
    ${lib_path})

target_sources(c4e3 PRIVATE
    c4e3.cpp
    ${lib_file})