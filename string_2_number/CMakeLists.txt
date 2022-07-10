cmake_minimum_required(VERSION 3.12.0)

project(string_2_number)

add_executable(string_2_number)

target_include_directories(string_2_number PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(string_2_number PRIVATE
    string_2_number.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)