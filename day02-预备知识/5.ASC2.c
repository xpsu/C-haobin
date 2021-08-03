//
// Created by 14027 on 2019/12/16.
//
#include <stdio.h>

int main(void) {
    char i1 = 'A';
    char i2 = 'B';
    char i3 = 'a';
    char i4 = 'b';
    char i5 = '0';

    printf("A的ASC码为：%d\n", i1);
    printf("B的ASC码为：%d\n", i2);
    printf("a的ASC码为：%d\n", i3);
    printf("b的ASC码为：%d\n", i4);
    printf("0的ASC码为：%d\n", i5);

    char ch = 'A';
    // 等价于  char ch;  ch = 'A';
    // char ch = "AB";
    // error 因为"AB"是字符串，

    // 我们不能把字符串赋给单个字符变量 char ch = "A";
    // error

    // char ch = 'AB';
    // 'AB'是错误的

    // char ch = 'B';
    // error, 因为ch变量已经在4行定义了，
    // 这样会导致变量名被重复定义

    ch = 'C';
    ch = 'D';
    printf("%c\n", ch);

    return 0;
}

