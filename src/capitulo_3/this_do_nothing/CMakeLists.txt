cmake_minimum_required(VERSION 3.12.0)

project(this_do_nothing)

add_executable(this_do_nothing)

target_include_directories(this_do_nothing PRIVATE
    ${lib_path})

target_sources(this_do_nothing PRIVATE
    this_do_nothing.cpp
    ${lib_file})