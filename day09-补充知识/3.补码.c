/*
 * Created by 14027 2019/12/28 17:52
 */
#include <stdio.h>

int main(void) {
    int i1 = 1;
    printf("1的十六进制为：%#X\n", i1);

    int i2 = -1;
    printf("-1的十六进制为：%#X\n", i2);

    // int的最大值
    int j1 = 0x7FFFFFFF;
    int j2 = 0x80000000;
    printf("int取值范围：%d 到 %d\n", j2, j1);

    return 0;
}