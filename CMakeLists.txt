cmake_minimum_required(VERSION 3.3)
project(CSCI-E-28-Unix-Linux-Systems-Programming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#[[set(SOURCE_FILES
    CMakeLists.txt
    getchar.c
    main.cpp
    more01.c)]]

#add_executable(CSCI_E_28_Unix___Linux_Systems_Programming ${SOURCE_FILES})
add_executable(getchar getchar.c)
add_executable(main main.cpp)
add_executable(more01 more01.c)