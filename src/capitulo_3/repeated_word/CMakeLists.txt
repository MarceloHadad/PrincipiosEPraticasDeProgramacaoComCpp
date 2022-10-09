cmake_minimum_required(VERSION 3.12.0)

project(repeated_word)

add_executable(repeated_word)

target_include_directories(repeated_word PRIVATE
    ${lib_path})

target_sources(repeated_word PRIVATE
    repeated_word.cpp
    ${lib_file})