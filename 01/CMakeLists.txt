cmake_minimum_required(VERSION 3.27)
project(greeter)

set(CMAKE_CXX_STANDARD 23)

add_executable(greeterExe main.cpp)
add_library(greeterLib STATIC library.h library.cpp)
target_link_libraries(greeterExe greeterLib)