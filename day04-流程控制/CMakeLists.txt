cmake_minimum_required(VERSION 3.18)
project(4 C)

set(CMAKE_C_STANDARD 99)

add_executable(1.1 1.1选择.c)
add_executable(1.2 1.2成绩的例子.c)
add_executable(1.3 1.3互换两个数字.c)
add_executable(1.4 1.4三个数排序.c)
add_executable(1.5 1.5.c)

add_executable(2.1 2.1为什么需要循环.c)
add_executable(2.2 2.2习题.c)
add_executable(2.3 2.3类型转换.c)
add_executable(2.4 2.4多层循环的嵌套.c)
add_executable(2.5 2.5前自增与后自增的区别.c)
add_executable(2.6 2.6三目运算符.c)
add_executable(2.7 2.7回文数.c)
add_executable(2.8 2.8斐波那契数列.c)
add_executable(2.9 2.9wihle循环.c)

add_executable(2.10 2.10一元二次方程.c)
target_link_libraries(2.10 m)

add_executable(2.11 2.11switch用法.c)
add_executable(2.12 2.12break与循环.c)
add_executable(2.13 2.13continue.c)

