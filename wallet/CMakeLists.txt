cmake_minimum_required(VERSION 3.12.0)

project(wallet)

add_executable(wallet)

target_include_directories(wallet PRIVATE
    ${CMAKE_SOURCE_DIR}/lib/)

target_sources(wallet PRIVATE
    wallet.cpp
    ${CMAKE_SOURCE_DIR}/lib/std_lib_facilities.h)