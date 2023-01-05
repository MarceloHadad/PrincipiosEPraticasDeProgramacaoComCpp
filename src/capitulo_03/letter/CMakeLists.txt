cmake_minimum_required(VERSION 3.12.0)

project(letter)

add_executable(letter)

target_include_directories(letter PRIVATE
    ${lib_path})

target_sources(letter PRIVATE
    letter.cpp
    ${lib_file})