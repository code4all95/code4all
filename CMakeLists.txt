cmake_minimum_required(VERSION 2.8)

project(code4All)

#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/lib)

#message(STATUS "CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR})
#message(STATUS "CMAKE_BINARY_DIR: " ${CMAKE_BINARY_DIR})
message(STATUS "LIBRARY_OUTPUT_PATH: " ${LIBRARY_OUTPUT_PATH})

add_subdirectory(example)
add_subdirectory(guvi)