cmake_minimum_required(VERSION 3.10)

project(guess_the_number)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MAIN_DIR ${CMAKE_SOURCE_DIR})
set(CPP_DIR ${CMAKE_SOURCE_DIR}/src)
set(HEADER_DIR ${CMAKE_SOURCE_DIR}/src/include)

set(CPP_FILES ${CPP_DIR}/main.cpp)
set(HEADER_FILES ${HEADER_DIR})


add_executable(program ${CPP_FILES})
target_include_directories(program PUBLIC ${HEADER_DIR})