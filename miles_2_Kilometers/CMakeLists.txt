cmake_minimum_required(VERSION 3.12.0)

project(miles_2_Kilometers)

add_executable(miles_2_Kilometers)

target_include_directories(miles_2_Kilometers PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(miles_2_Kilometers PRIVATE
    miles_2_Kilometers.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)