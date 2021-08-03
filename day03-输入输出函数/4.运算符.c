//
// Created by 14027 on 2019/12/17 20:16.
//
#include <stdio.h>

int main(void) {
    int i = 10;
    int k = 20;
    int m;

    m = (1 > 2) || (k = 5);
    // 不含有分号的是表达式 含有分号的是语句

    printf("m = %d, k = %d\n", m, k);

    return 0;
}