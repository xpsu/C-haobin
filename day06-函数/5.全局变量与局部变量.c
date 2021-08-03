/*
 * Created by 14027 2019/12/24 23:07
 * 需求：
 *      学习全局变量与局部变量
 */
#include <stdio.h>

// 全局变量在整个程序中生效
//int i = 1;

// 函数内部的变量只在函数中生效
int f(int i) {
    i = 2;
    return i;
}

int main(void) {
    int i = 3;

    printf("%d\n", f(i));

    return 0;
}