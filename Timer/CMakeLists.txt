cmake_minimum_required(VERSION 3.20)

project(Timer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(
    HEADER_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/include/timer.hpp" 
    # "${CMAKE_CURRENT_SOURCE_DIR}/include/compare.hpp"
)

add_library(Timer INTERFACE ${HEADER_FILES})

target_include_directories(Timer INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>  
    $<INSTALL_INTERFACE:include>  # <prefix>/include/mylib
)