cmake_minimum_required(VERSION 3.12.0)

project(c4e17)

add_executable(c4e17)

target_include_directories(c4e17 PRIVATE
    ${lib_path})

target_sources(c4e17 PRIVATE
    c4e17.cpp
    ${lib_file})