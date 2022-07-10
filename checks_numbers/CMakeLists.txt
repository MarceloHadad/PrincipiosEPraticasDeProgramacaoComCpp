cmake_minimum_required(VERSION 3.12.0)

project(checks_numbers)

add_executable(checks_numbers)

target_include_directories(checks_numbers PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(checks_numbers PRIVATE
    checks_numbers.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)