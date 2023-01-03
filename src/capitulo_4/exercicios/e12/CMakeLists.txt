cmake_minimum_required(VERSION 3.12.0)

project(c4e12)

add_executable(c4e12)

target_include_directories(c4e12 PRIVATE
    ${lib_path})

target_sources(c4e12 PRIVATE
    c4e12.cpp
    ${lib_file})