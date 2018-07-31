cmake_minimum_required(VERSION 3.10)
project(Multithread)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost)
include_directories(${Boost_INCLUDE_DIR})

add_executable(Multithread src/main.cpp
        src/Apps/MyPrint.cpp src/Apps/MyPrint.h
        src/Apps/TrieNode.cpp src/Apps/TrieNode.h
        src/Apps/Semaphore.cpp src/Apps/Semaphore.h
        src/Apps/KidPrint.cpp src/Apps/KidPrint.h)