cmake_minimum_required(VERSION 3.0)

project( password_generator )

add_subdirectory( libs )

add_executable( ${PROJECT_NAME} main.cpp )

target_link_libraries( ${PROJECT_NAME} passgen )