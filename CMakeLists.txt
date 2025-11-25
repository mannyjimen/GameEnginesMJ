cmake_minimum_required(VERSION 3.24)

project(MyGame)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQURED TRUE)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(Base)
add_subdirectory(GameEnginesMJ)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY NAME VS_STARTUP_PROJECT GameEnginesMJ)