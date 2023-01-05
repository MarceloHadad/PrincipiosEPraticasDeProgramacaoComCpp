cmake_minimum_required(VERSION 3.12.0)

project(goodbye_cruel_world)

add_executable(goodbye_cruel_world)

target_include_directories(goodbye_cruel_world PRIVATE
    ${lib_path})

target_sources(goodbye_cruel_world PRIVATE
    goodbye_cruel_world.cpp
    ${lib_file})