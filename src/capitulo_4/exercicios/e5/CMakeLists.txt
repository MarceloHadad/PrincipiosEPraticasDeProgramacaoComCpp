cmake_minimum_required(VERSION 3.12.0)

project(c4e5)

add_executable(c4e5)

target_include_directories(c4e5 PRIVATE
    ${lib_path})

target_sources(c4e5 PRIVATE
    c4e5.cpp
    ${lib_file})