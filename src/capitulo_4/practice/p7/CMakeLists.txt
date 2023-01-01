cmake_minimum_required(VERSION 3.12.0)

project(c4p7)

add_executable(c4p7)

target_include_directories(c4p7 PRIVATE
    ${lib_path})

target_sources(c4p7 PRIVATE
    c4p7.cpp
    ${lib_file})