cmake_minimum_required(VERSION 3.12.0)

project(c4e18)

add_executable(c4e18)

target_include_directories(c4e18 PRIVATE
    ${lib_path})

target_sources(c4e18 PRIVATE
    c4e18.cpp
    ${lib_file})