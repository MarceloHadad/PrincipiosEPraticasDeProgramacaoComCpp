cmake_minimum_required(VERSION 3.12.0)

project(letter)

add_executable(letter)

target_include_directories(letter PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(letter PRIVATE
    letter.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)