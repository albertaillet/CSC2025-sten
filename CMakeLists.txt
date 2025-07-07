cmake_minimum_required(VERSION 3.16)
project(Catch2Test LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

find_package(Catch2 CONFIG REQUIRED)

add_executable(ex0.0 src/ex0.0_benchmarking_basics.cpp)
target_link_libraries(ex0.0 PRIVATE Catch2::Catch2WithMain)

add_executable(ex0.1 src/ex0.1_time.cpp)

add_executable(ex0.2 src/ex0.2_benchmarking_advanced.cpp)
target_link_libraries(ex0.2 PRIVATE Catch2::Catch2WithMain)

add_executable(ex1.0
    src/ex1.0_scaling.cpp
    src/algorithms/ex1.0_algorithms.cpp
)
target_link_libraries(ex1.0 PRIVATE Catch2::Catch2WithMain)

add_executable(ex1.1
    src/ex1.1_complexity.cpp
    src/algorithms/ex1.1_algorithms.cpp
)
target_link_libraries(ex1.1 PRIVATE Catch2::Catch2WithMain)

add_executable(ex2.0 src/ex2.0_cache.cpp)