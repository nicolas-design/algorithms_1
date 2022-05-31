cmake_minimum_required(VERSION 3.21)
project(alg)

set(CMAKE_CXX_STANDARD 14)

add_executable(alg main.cpp ware.cpp ware.h sortiment.cpp sortiment.h algorithms.cpp algorithms.h bubbleSort.cpp insertionSort.cpp mergeSort.cpp)
