cmake_minimum_required(VERSION 3.18)
project(1 C)

set(CMAKE_C_STANDARD 99)

add_executable(1 1.HelloWorld.c)

add_executable(2 2.二元一次方程求解.c)
target_link_libraries (2 m)

add_executable(3 3.内存泄漏.c)