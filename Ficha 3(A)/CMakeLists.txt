# AED 2022/2023 - Aula Pratica 03
# Pedro Ribeiro (DCC/FCUP) [ultimo update: 02/10/2022]

cmake_minimum_required(VERSION 3.10)
project(aed2223_p03)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Tests")

add_executable(aed2223_p03 main.cpp Tests/tests.cpp Tests/Timer.cpp Tests/funWithSearch.cpp)

target_link_libraries(aed2223_p03 gtest gtest_main)
