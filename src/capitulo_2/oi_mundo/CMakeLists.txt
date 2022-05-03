cmake_minimum_required(VERSION 3.12.0)

project(oi_mundo)

add_executable(oi_mundo)

target_include_directories(oi_mundo PRIVATE
    ${lib_path})

target_sources(oi_mundo PRIVATE
    oi_mundo.cpp
    ${lib_file})