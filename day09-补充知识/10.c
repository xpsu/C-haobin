/*
 * Created by 14027 2019/12/30 20:21
 * 需求：
 *      把1到100之间的素数全部打印到显示器上，每行打印一个素数
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// 此函数的功能：传参如果是素数，返回true，不是false
bool f(int num) {
    int k;

    k = (int) sqrt((double) num);
    for (int j = 2; j <= k; ++j) {
        if (num % j == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int num = 1000;

    for (int i = 2; i <= num; ++i) {
        if (f(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
