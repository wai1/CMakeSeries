cmake_minimum_required(VERSION 3.5)
project(HelloApp
        VERSION 0.0.1
        DESCRIPTION "The Leading Hello World App"
        LANGUAGES CXX)

#List your sources
add_executable(HelloBinary main.cpp
                src/dog.cpp
                src/operations.cpp)       

# Target
add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)



