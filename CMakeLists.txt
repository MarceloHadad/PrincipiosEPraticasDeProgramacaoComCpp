cmake_minimum_required(VERSION 3.12.0)

project (PrincipiosEPraticasDeProgramacaoComCpp)

set(lib_path ${CMAKE_SOURCE_DIR}/include/lib/)
set(lib_file ${CMAKE_SOURCE_DIR}/include/lib/std_lib_facilities.h)

add_subdirectory(src/capitulo_2)
add_subdirectory(src/capitulo_3)