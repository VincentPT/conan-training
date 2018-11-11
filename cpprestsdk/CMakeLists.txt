cmake_minimum_required(VERSION 2.8.12)
project(hello-cpprestsdk-conan)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo_multi.cmake)
conan_basic_setup()

add_executable(${PROJECT_NAME} main.cpp)
conan_target_link_libraries(${PROJECT_NAME})