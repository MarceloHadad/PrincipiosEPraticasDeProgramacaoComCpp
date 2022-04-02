cmake_minimum_required(VERSION 3.12.0)

project(floating_point)

add_executable(floating_point)

target_include_directories(floating_point PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(floating_point PRIVATE
    floating_point.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)