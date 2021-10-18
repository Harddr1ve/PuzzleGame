cmake_minimum_required(VERSION 3.20)
project(PuzzleGame)

set(CMAKE_CXX_STANDARD 20)

include_directories(lib/googletest/googletest)
include_directories(lib/googletest/googlemock)
include_directories(lib/SFML)
add_executable(PuzzleGame main.cpp)
target_link_libraries(PuzzleGame gtest gtest_main)
target_link_libraries(PuzzleGame sfml-graphics sfml-audio)