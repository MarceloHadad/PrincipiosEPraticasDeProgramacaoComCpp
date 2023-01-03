cmake_minimum_required(VERSION 3.12.0)

project(c4e7)

add_executable(c4e7)

target_include_directories(c4e7 PRIVATE
    ${lib_path})

target_sources(c4e7 PRIVATE
    c4e7.cpp
    ${lib_file})