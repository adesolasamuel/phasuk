cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
project(phasuk)
add_executable(phasuk)

target_sources(phasuk
    PRIVATE
    src/main.cpp
    src/BibleVerse.cpp
)

include_directories(includes)