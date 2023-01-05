cmake_minimum_required(VERSION 3.12.0)

project(c4e6)

add_executable(c4e6)

target_include_directories(c4e6 PRIVATE
    ${lib_path})

target_sources(c4e6 PRIVATE
    c4e6.cpp
    ${lib_file})