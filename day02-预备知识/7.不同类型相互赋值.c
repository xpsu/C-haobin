//
// Created by 14027 on 2019/12/16.
//
#include <stdio.h>

int main(void) {
    long int k = 2147483649;
    printf("%ld\n", k);

    // 类型转换
    int i = 2;
    long j = 12345678;
    i = j;
    printf("%ld\n%ld\n", i, j);

    float x = 1.2;
    double y = 3.5;
    printf("%f %lf\n", x, y);

    return 0;
}


