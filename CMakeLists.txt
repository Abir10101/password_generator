cmake_minimum_required(VERSION 3.0)

project(password_generator)

add_library(passgen passgen.cpp)

add_executable(main main.cpp)

target_link_libraries(main passgen)