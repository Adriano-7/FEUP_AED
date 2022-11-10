# AED 2022/2023 - Aula Pratica 02
# Pedro Ribeiro (DCC/FCUP) [ultimo update: 25/09/2022]

cmake_minimum_required(VERSION 3.10)
project(aed2223_p02)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Tests")

add_executable(aed2223_p02 main.cpp Tests/tests.cpp Tests/Timer.cpp Tests/funWithComplexity.cpp)

target_link_libraries(aed2223_p02 gtest gtest_main)
