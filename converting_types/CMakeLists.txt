cmake_minimum_required(VERSION 3.12.0)

project(converting_types)

add_executable(converting_types)

target_include_directories(converting_types PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(converting_types PRIVATE
    converting_types.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)