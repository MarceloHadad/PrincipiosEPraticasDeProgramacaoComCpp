cmake_minimum_required(VERSION 3.12.0)

project(converting_types)

add_executable(converting_types)

target_include_directories(converting_types PRIVATE
    ${lib_path})

target_sources(converting_types PRIVATE
    converting_types.cpp
    ${lib_file})