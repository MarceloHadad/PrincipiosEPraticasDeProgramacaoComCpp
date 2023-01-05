cmake_minimum_required(VERSION 3.12.0)

set(thisProject c04p08)

project(${thisProject})

add_executable(${thisProject})

target_include_directories(${thisProject} PRIVATE
    ${lib_path})

target_sources(${thisProject} PRIVATE
    ${thisProject}.cpp
    ${lib_file})