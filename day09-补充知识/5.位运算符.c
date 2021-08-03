/*
 * Created by 14027 2019/12/28 23:14
 * 需求：
 *      &  与
 *      |  或
 *      ~  取反
 *      ^  异或
 *      >> 右移
 *      << 左移
 */
#include <stdio.h>

int main(void) {
    unsigned int i = 3;
    // 3的二进制 0000 0011

    unsigned int j = 5;
    // 5的二进制 0000 0101

    int k;

    // & 按位与运算
    k = i & j;
    printf("%d\n", k);
    // 0001=1

    // | 按位或运算
    k = i | j;
    printf("%d\n", k);
    // 0111=7

    // ~ 按位取反
    k = ~i;
    printf("%d\n", k);
    // 1111 1100
    // 0000 0100=-4

    // ^ 按位异或运算：相同为0，不同为1
    k = i ^ j;
    printf("%d\n", k);
    // 0110=6

    // 右移一位，相当于除以2^1
    k = j >> 1;
    printf("%d\n", k);
    // 101-->10=2

    // 左移2位，相当于乘以以2^2
    k = i << 2;
    printf("%d\n", k);
    // 11->1100=12

    return 0;
}