# Name of the project:
project(rguignar-reflexivity)

cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

set (CMAKE_CXX_STANDARD 14)
include_directories("${CMAKE_SOURCE_DIR}/include")

add_executable(${PROJECT_NAME}
               src/main.cpp
               src/reflexivity.cpp
               )

set (CMAKE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
