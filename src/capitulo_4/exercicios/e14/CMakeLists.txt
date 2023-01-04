cmake_minimum_required(VERSION 3.12.0)

project(c4e14)

add_executable(c4e14)

target_include_directories(c4e14 PRIVATE
    ${lib_path})

target_sources(c4e14 PRIVATE
    c4e14.cpp
    ${lib_file})