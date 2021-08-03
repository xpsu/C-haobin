//
// Created by 14027 on 2019/12/15.
//
#include <stdio.h>

int main(void) {
    // 整型int,short int,long int
    // 表示i变量为整型变量，即i变量只能存放整数,不能放小数
    int i = 1;
    printf("i=%d\n", i);

    // 浮点型float,double
    double j;
    j = 1.0 / 3.0;
    // 最终是存放在内存中，程序终止之后变量所占的空间被释放掉
    printf("j=%lf\n", j);

    // 字符型char
    char k = 'A';
    printf("k=%c\n,", k);

    return 0;
}

