project(Sandbox)

add_compile_definitions(LM_PLATFORM_LINUX)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin-int/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin-int/${CMAKE_BUILD_TYPE}/${PROJECT_NAME})

include_directories(${CMAKE_SOURCE_DIR}/Lumen/src)

add_executable(Application src/SandboxApp.cpp)

target_link_libraries(Application PUBLIC Lumen)