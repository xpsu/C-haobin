/*
 * Created by 14027 2019/12/26 16:58
 * 需求：
 *      内存地址编号：一个字节一个编号
 *      变量地址用该变量的首字节来表示
 */
#include <stdio.h>

int main(void) {
    int i = 5;
    int j = 10;
    int *p = &i;
    int *q = &j;
    int a[5];

    p = &a[0];
    q = &a[1];

    printf("p和q所指向的单元相隔%d个单元\n", q - p);

    printf("p和q所存地址的相隔%d个字节\n", (char *)q - (char *)p);

    // p - q 没有实际意义

    return 0;
}
