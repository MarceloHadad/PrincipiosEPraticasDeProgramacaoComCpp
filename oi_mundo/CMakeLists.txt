cmake_minimum_required(VERSION 3.12.0)

project(oi_mundo)
add_definitions(-DUNICODE -D_UNICODE)

add_executable(oi_mundo)

source_group("OiMundo")

target_sources(oi_mundo PRIVATE
    oi_mundo.cpp
    std_lib_facilities.h)