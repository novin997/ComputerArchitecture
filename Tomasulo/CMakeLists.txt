cmake_minimum_required(VERSION 3.20)

project(Tomasulo VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

set(
    HEADER_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/include/loadBuffer.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/fpAddReservationStation.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/include/fpMultReservationStation.hpp"
    # "${CMAKE_CURRENT_SOURCE_DIR}/include/compare.hpp"
)

add_library(Tomasulo INTERFACE ${HEADER_FILES})

target_include_directories(Tomasulo INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>  
    $<INSTALL_INTERFACE:include>  # <prefix>/include/mylib
)