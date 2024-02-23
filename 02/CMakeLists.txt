cmake_minimum_required(VERSION 3.27)
project(leaver)

set(CMAKE_CXX_STANDARD 23)
add_library(leaverLib SHARED Leaver.h Leaver.cpp)
set ( CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(leaverExe main.cpp)
target_link_libraries(leaverExe leaverLib)