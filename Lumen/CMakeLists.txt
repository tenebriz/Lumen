project(Lumen)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin-int/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin-int/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})

add_compile_definitions(LM_PLATFORM_LINUX LM_BUILD_DLL)


add_subdirectory("${CMAKE_SOURCE_DIR}/Lumen/vendor/GLFW")

file(GLOB SOURCES 
        src/Lumen/*.h
        src/Lumen/*.cpp
)

add_library(
    Lumen SHARED ${SOURCES}
)

target_link_libraries(Lumen GLFW)

target_include_directories(Lumen PUBLIC "${CMAKE_SOURCE_DIR}/Lumen/src"
                                  PUBLIC "${CMAKE_SOURCE_DIR}/Lumen/vendor/spdlog/include"
                                  PUBLIC "${CMAKE_SOURCE_DIR}/Lumen/vendor/GLFW"
)

target_precompile_headers(Lumen PUBLIC "${CMAKE_SOURCE_DIR}/Lumen/src/lmpch.h")
