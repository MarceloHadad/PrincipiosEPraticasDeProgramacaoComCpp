cmake_minimum_required(VERSION 3.12.0)

project(c4e19)

add_executable(c4e19)

target_include_directories(c4e19 PRIVATE
    ${lib_path})

target_sources(c4e19 PRIVATE
    c4e19.cpp
    ${lib_file})