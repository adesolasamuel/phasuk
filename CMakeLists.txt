cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
project(phasuk)
add_executable(phasuk)

if(UNIX AND NOT APPLE)
    target_link_options(phasuk PRIVATE -static)
endif()

target_sources(phasuk
    PRIVATE
    src/main.cpp
    src/BibleVerse.cpp
)

include_directories(includes)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/Bible DESTINATION ${CMAKE_CURRENT_BINARY_DIR})


install(TARGETS phasuk DESTINATION bin)
install(DIRECTORY Bible DESTINATION bin)