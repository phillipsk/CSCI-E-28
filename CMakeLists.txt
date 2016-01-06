cmake_minimum_required(VERSION 3.3)
project(CSCI-E-28-Unix-Linux-Systems-Programming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#[[
set(SOURCE_FILES
    CMakeLists.txt
    getchar.c
    main.cpp
        hw0
    more01.c)
]]

#target_link_libraries(<math.h> m)

add_executable(main main.cpp)
add_executable(getchar getchar.c)
add_executable(more01 more01.c)
add_executable(argu print_all_arguments.c)
add_executable(chars chars.c)
add_executable(ch4 ch4.c)
