//
// Created by 14027 on 2019/12/15.
//
#include <stdio.h>

int main(void) {
    int i;
    i = 10;
    printf("i=%d\n", i);
    // int %d, long int %ld, float %f, double %lf, char %c

    // 类型转换
    int i1 = 2;
    long i2 = 12345678;
    i1 = i2;
    printf("%ld\n%ld\n", i1, i2);

    float x = 1.2;
    double y = 3.5;
    printf("%f %lf\n", x, y);

    return 0;
}

