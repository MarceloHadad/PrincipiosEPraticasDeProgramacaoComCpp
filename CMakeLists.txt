cmake_minimum_required(VERSION 3.12.0)

project (PrincipiosEPraticasDeProgramacaoComCpp)

set(lib_path ${CMAKE_SOURCE_DIR}/include/lib/)
set(lib_file ${CMAKE_SOURCE_DIR}/include/lib/std_lib_facilities.h)
set(capitulo2_path ${CMAKE_SOURCE_DIR}/src/capitulo_2)
set(capitulo3_path ${CMAKE_SOURCE_DIR}/src/capitulo_3)

add_subdirectory(${capitulo2_path}/oi_mundo)
add_subdirectory(${capitulo2_path}/instructions)

add_subdirectory(oi_mundo)
add_subdirectory(instructions)
add_subdirectory(letter)
add_subdirectory(name_and_age)
add_subdirectory(floating_point)
add_subdirectory(repeated_word)
add_subdirectory(goodbye_cruel_world)
add_subdirectory(converting_types)
add_subdirectory(miles_2_Kilometers)
add_subdirectory(this_do_nothing)
add_subdirectory(checks_numbers)
add_subdirectory(sort_numbers)
add_subdirectory(sort_strings)
add_subdirectory(even_number)
add_subdirectory(string_2_number)
add_subdirectory(calculator)
add_subdirectory(wallet)