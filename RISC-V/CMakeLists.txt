cmake_minimum_required(VERSION 3.20)

project(RISCV VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(
    HEADER_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/include/riscv.hpp" 
    # "${CMAKE_CURRENT_SOURCE_DIR}/include/compare.hpp"
)

add_library(RISCV INTERFACE ${HEADER_FILES})

target_include_directories(RISCV INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>  
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)