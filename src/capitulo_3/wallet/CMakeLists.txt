cmake_minimum_required(VERSION 3.12.0)

project(wallet)

add_executable(wallet)

target_include_directories(wallet PRIVATE
    ${lib_path})

target_sources(wallet PRIVATE
    wallet.cpp
    ${lib_file})