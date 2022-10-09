cmake_minimum_required(VERSION 3.12.0)

project(checks_numbers)

add_executable(checks_numbers)

target_include_directories(checks_numbers PRIVATE
    ${lib_path})

target_sources(checks_numbers PRIVATE
    checks_numbers.cpp
    ${lib_file})