cmake_minimum_required(VERSION 3.26.4)

project(findroots)
 
add_executable(findroots main.cpp)

# Define el directorio de salida del ejecutable
set_target_properties(findroots PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
    RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}
)