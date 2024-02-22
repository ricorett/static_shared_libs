cmake_minimum_required(VERSION 3.27)
project(greeter)

set(CMAKE_CXX_STANDARD 17)

add_library(greeterLib STATIC library.h library.cpp)
add_executable(greeterExe main.cpp)
target_link_libraries(greeterExe greeterLib)