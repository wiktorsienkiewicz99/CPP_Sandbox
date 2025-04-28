cmake_minimum_required(VERSION 3.31)
project(CPP_Sandbox)

message(STATUS "Using compiler: ${CMAKE_CXX_COMPILER}")

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP_Sandbox src/main.cpp
        src/Logger/Logger.cpp
        src/Logger/Logger.h
        src/Variables/Variables.cpp
        src/Variables/Variables.h
        src/Increment/Increment.cpp
        src/Increment/Increment.h
)
