cmake_minimum_required(VERSION 4.1)
project(DSA)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA src/Patterns/Patterns.cpp
        src/Patterns/Patterns.h
        src/main.cpp
        src/MathDSA/MathDSA.cpp
        src/MathDSA/MathDSA.h
        src/RecursionBasics/RecursionBasics.cpp
        src/RecursionBasics/RecursionBasics.h
        src/HashingBasics/HashingBasics.cpp
        src/HashingBasics/HashingBasics.h
)
