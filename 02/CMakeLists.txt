cmake_minimum_required(VERSION 3.27)
project(leaver)

set(CMAKE_CXX_STANDARD 23)
set (CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_executable(leaverExe main.cpp)
set(SOURCES
        Leaver.cpp
)
set(HEADERS
        Leaver.h
)
add_library(leaverLib SHARED ${SOURCES} ${HEADERS})
target_link_libraries(leaverLib leaverExe)