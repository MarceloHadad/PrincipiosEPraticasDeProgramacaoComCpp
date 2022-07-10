cmake_minimum_required(VERSION 3.12.0)

project(even_number)

add_executable(even_number)

target_include_directories(even_number PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(even_number PRIVATE
    even_number.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)