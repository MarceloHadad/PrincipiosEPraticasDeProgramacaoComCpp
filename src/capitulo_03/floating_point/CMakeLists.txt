cmake_minimum_required(VERSION 3.12.0)

project(floating_point)

add_executable(floating_point)

target_include_directories(floating_point PRIVATE
    ${lib_path})

target_sources(floating_point PRIVATE
    floating_point.cpp
    ${lib_file})