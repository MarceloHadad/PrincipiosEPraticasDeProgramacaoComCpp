cmake_minimum_required(VERSION 3.12.0)

project(c4e20)

add_executable(c4e20)

target_include_directories(c4e20 PRIVATE
    ${lib_path})

target_sources(c4e20 PRIVATE
    c4e20.cpp
    ${lib_file})