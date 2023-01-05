cmake_minimum_required(VERSION 3.12.0)

project(c4e2)

add_executable(c4e2)

target_include_directories(c4e2 PRIVATE
    ${lib_path})

target_sources(c4e2 PRIVATE
    c4e2.cpp
    ${lib_file})