//
// Created by 14027 on 2019/12/15.
//
#include <stdio.h>

int main(void) {
    // 十进制
    int i = 88;
    printf("i的十进制为：%d\n", i);
    /*
     * printf的用法
     * %d表示以十进制输出
     * %x或%X表示以十六进制输出
     * %o表示以八进制输出
     *
     */

    // 十六进制
    printf("i的十六进制为：%x\n", i);

    // 浮点数的表示
    double x = 4.2e-1;
    printf("x的值为：%lf\n", x);

    return 0;
}


