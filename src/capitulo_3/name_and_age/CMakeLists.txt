cmake_minimum_required(VERSION 3.12.0)

project(name_and_age)

add_executable(name_and_age)

target_include_directories(name_and_age PRIVATE
    ${lib_path})

target_sources(name_and_age PRIVATE
    name_and_age.cpp
    ${lib_file})