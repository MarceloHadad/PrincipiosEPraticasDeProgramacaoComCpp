cmake_minimum_required(VERSION 3.12.0)

project(miles_2_Kilometers)

add_executable(miles_2_Kilometers)

target_include_directories(miles_2_Kilometers PRIVATE
    ${lib_path})

target_sources(miles_2_Kilometers PRIVATE
    miles_2_Kilometers.cpp
    ${lib_file})