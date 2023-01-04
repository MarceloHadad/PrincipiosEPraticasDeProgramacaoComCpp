cmake_minimum_required(VERSION 3.12.0)

project(c4e13)

add_executable(c4e13)

target_include_directories(c4e13 PRIVATE
    ${lib_path})

target_sources(c4e13 PRIVATE
    c4e13.cpp
    ${lib_file})