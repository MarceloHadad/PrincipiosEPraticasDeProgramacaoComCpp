cmake_minimum_required(VERSION 3.12.0)

project(sort_strings)

add_executable(sort_strings)

target_include_directories(sort_strings PRIVATE
    ${lib_path})

target_sources(sort_strings PRIVATE
    sort_strings.cpp
    ${lib_file})