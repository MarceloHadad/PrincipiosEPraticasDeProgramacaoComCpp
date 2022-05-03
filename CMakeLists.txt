cmake_minimum_required(VERSION 3.12.0)

project (PrincipiosEPraticasDeProgramacaoComCpp)

set(lib_path ${CMAKE_SOURCE_DIR}/include/lib/)
set(lib_file ${CMAKE_SOURCE_DIR}/include/lib/std_lib_facilities.h)
set(capitulo2_path ${CMAKE_SOURCE_DIR}/src/capitulo_2)
set(capitulo3_path ${CMAKE_SOURCE_DIR}/src/capitulo_3)

add_subdirectory(${capitulo2_path}/oi_mundo)
add_subdirectory(${capitulo2_path}/instructions)