cmake_minimum_required(VERSION 3.16)
project(Lumen CXX)


set(CMAKE_CONFIGURATION_TYPES "Debug;Release;Dist")
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(LM_DEBUG)
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_definitions(LM_RELEASE)
elseif(CMAKE_BUILD_TYPE STREQUAL "Dist")
    add_compile_definitions(LM_DIST)
endif()

add_subdirectory(Lumen)
add_subdirectory(Sandbox)