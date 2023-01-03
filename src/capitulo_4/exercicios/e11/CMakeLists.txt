cmake_minimum_required(VERSION 3.12.0)

project(c4e11)

add_executable(c4e11)

target_include_directories(c4e11 PRIVATE
    ${lib_path})

target_sources(c4e11 PRIVATE
    c4e11.cpp
    ${lib_file})