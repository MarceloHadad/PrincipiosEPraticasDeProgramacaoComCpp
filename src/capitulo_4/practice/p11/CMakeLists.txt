cmake_minimum_required(VERSION 3.12.0)

project(c4p11)

add_executable(c4p11)

target_include_directories(c4p11 PRIVATE
    ${lib_path})

target_sources(c4p11 PRIVATE
    c4p11.cpp
    ${lib_file})