cmake_minimum_required(VERSION 3.27)
project(Playground)

set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME})

# Project Sources
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")
target_sources(${PROJECT_NAME} PRIVATE ${SOURCES})
target_precompile_headers(${PROJECT_NAME} PRIVATE src/pch.h)

# Release
if (${CMAKE_BUILD_TYPE} MATCHES Release)
    set_target_properties(${PROJECT_NAME} PROPERTIES WIN32_EXECUTABLE true)
endif ()