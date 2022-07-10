cmake_minimum_required(VERSION 3.12.0)

project(sort_numbers)

add_executable(sort_numbers)

target_include_directories(sort_numbers PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(sort_numbers PRIVATE
    sort_numbers.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)