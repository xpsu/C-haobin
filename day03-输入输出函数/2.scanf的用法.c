//
// Created by 14027 on 2019/12/16.
//
#include <stdio.h>

int main(void) {
    // scanf用法1
    int i;

    scanf("%d", &i);//&i 表示i的地址 &是一个取地址符
    printf("i=%d\n", i);

    // scanf用法2
    int j;
    int k;

    scanf("%d %d", &j, &k);
    printf("j=%d, k=%d\n", j, k);

    return 0;
}
