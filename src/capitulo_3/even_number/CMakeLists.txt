cmake_minimum_required(VERSION 3.12.0)

project(even_number)

add_executable(even_number)

target_include_directories(even_number PRIVATE
    ${lib_path})
    
target_sources(even_number PRIVATE
    even_number.cpp
    ${lib_file})