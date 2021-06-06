cmake_minimum_required(VERSION 3.19)
project(TDD01CPP_CMAKE_CLION)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(TDD01CPP_CMAKE_CLION main.cpp TennisGame.cpp TennisGame.h)

add_executable(RunTests TennisTests.cpp TennisGame.cpp)
target_link_libraries(RunTests gtest gtest_main)

