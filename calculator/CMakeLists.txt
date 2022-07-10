cmake_minimum_required(VERSION 3.12.0)

project(calculator)

add_executable(calculator)

target_include_directories(calculator PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(calculator PRIVATE
    calculator.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)