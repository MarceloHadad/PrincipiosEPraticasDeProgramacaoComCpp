cmake_minimum_required(VERSION 3.12.0)

project(calculator)

add_executable(calculator)

target_include_directories(calculator PRIVATE
    ${lib_path})

target_sources(calculator PRIVATE
    calculator.cpp
    ${lib_file})