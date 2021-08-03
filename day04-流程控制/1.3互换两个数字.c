/*
 * Created by 14027 on 2019/12/18 21:04.
 * 需求：交换两个数字
 */
#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 2;
    int tmp;
    // 定义临时变量

    tmp = a;
    // 先把a存起来
    a = b;
    b = tmp;

    printf("a=%d\n", a);
    printf("b=%d\n", b);

    return 0;
}