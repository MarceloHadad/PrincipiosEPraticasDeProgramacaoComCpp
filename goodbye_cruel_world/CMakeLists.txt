cmake_minimum_required(VERSION 3.12.0)

project(goodbye_cruel_world)

add_executable(goodbye_cruel_world)

target_include_directories(goodbye_cruel_world PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(goodbye_cruel_world PRIVATE
    goodbye_cruel_world.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)