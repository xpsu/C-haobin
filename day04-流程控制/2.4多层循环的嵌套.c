/*
 * Created by 14027 on 2019/12/19 21:41.
 * 需求：打印九九乘法表
 * 目的：学习for循环的嵌套
 */
#include <stdio.h>

int main(void) {
    // 思路：一行一行的打印
    // i表示行数
    for (int i = 1; i <= 9; ++i) {
        // j表示列数
        for (int j = 1; j <= i; ++j) {
            printf("%d*%d=%d\t", j, i, j * i);
        }

        printf("\n");
        // 打印完一行之后换行
    }

    return 0;
}