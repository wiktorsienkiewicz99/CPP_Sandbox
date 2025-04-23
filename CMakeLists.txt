cmake_minimum_required(VERSION 3.31)
project(CPP_Sandbox)

message(STATUS "Using compiler: ${CMAKE_CXX_COMPILER}")

set(CMAKE_CXX_STANDARD 20)

add_executable(CPP_Sandbox main.cpp
        Log.cpp
        Log.h
        Variables.cpp
        Variables.h
)
