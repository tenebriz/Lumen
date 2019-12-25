cmake_minimum_required(VERSION 3.16)
project(Lumen)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

add_subdirectory(Lumen)
add_subdirectory(Sandbox)