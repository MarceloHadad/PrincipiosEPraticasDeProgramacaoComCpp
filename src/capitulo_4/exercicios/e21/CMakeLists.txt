cmake_minimum_required(VERSION 3.12.0)

project(c4e21)

add_executable(c4e21)

target_include_directories(c4e21 PRIVATE
    ${lib_path})

target_sources(c4e21 PRIVATE
    c4e21.cpp
    ${lib_file})