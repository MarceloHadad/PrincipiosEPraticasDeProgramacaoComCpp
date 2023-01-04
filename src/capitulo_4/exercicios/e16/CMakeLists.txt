cmake_minimum_required(VERSION 3.12.0)

project(c4e16)

add_executable(c4e16)

target_include_directories(c4e16 PRIVATE
    ${lib_path})

target_sources(c4e16 PRIVATE
    c4e16.cpp
    ${lib_file})