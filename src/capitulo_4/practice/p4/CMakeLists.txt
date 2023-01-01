cmake_minimum_required(VERSION 3.12.0)

project(c4p4)

add_executable(c4p4)

target_include_directories(c4p4 PRIVATE
    ${lib_path})

target_sources(c4p4 PRIVATE
    c4p4.cpp
    ${lib_file})