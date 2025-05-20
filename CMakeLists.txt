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
        src/TemplatesInterfaces/Drawable.h
        src/TemplatesInterfaces/Circle.cpp
        src/TemplatesInterfaces/Circle.h
        src/TemplatesInterfaces/Shape.h
        src/TemplatesInterfaces/Rectangle.cpp
        src/TemplatesInterfaces/Rectangle.h
        src/TemplatesInterfaces/Triangle.cpp
        src/TemplatesInterfaces/Triangle.h
        src/TemplatesInterfaces/Templates.cpp
        src/TemplatesInterfaces/Templates.h
        src/TemplatesInterfaces/Logger.cpp
        src/TemplatesInterfaces/Logger.h
        src/OOPPillars/Pillar.cpp
        src/OOPPillars/Pillar.h

)
add_executable(test_CPP_Sandbox
        src/test_main.cpp
        src/OOPPillars/Pillar.cpp
        src/OOPPillars/Pillar.h
)
