cmake_minimum_required(VERSION 3.31)
project(CPP_Sandbox LANGUAGES CXX)

# Must be set for C++ modules
set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API 1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Executable 1: Main
add_executable(CPP_Sandbox
        src/main.cpp
)

target_sources(CPP_Sandbox
        PRIVATE
        FILE_SET modules TYPE CXX_MODULES
        BASE_DIRS src/Collections
        FILES
        src/Collections/VectorModule.ixx
)

# Executable 2: Test
add_executable(test_CPP_Sandbox
        src/test_main.cpp
)

target_sources(test_CPP_Sandbox
        PRIVATE
        FILE_SET modules TYPE CXX_MODULES
        BASE_DIRS src/Collections
        FILES
        src/Collections/VectorModule.ixx
)

# Enable Clang-specific module flags
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    foreach(target CPP_Sandbox test_CPP_Sandbox)
        target_compile_options(${target} PRIVATE -fmodules -fcxx-modules)
    endforeach()
endif()