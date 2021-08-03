/*
 * Created by 14027 on 2019/12/19 19:08.
 * 需求：求1+ 1/2+...+1/100
 */
#include <stdio.h>

int main(void) {
    double sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum = sum + 1.0 / i;
        // 是OK的 推荐使用
        // sum = sum + (float)(1/i); 这样写是不对的
        // 也可以这样写:  sum = sum + 1 / (float)(i);   不推荐
    }

    printf("sum=%f", sum);

    return 0;
}