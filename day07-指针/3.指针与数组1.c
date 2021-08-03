/*
 * Created by 14027 2019/12/25 23:11
 */
#include <stdio.h>

int main(void) {
    int a[5];
    // a是数组名 5是数组元素的个数 元素就是变量

    printf("%p\n", &a[0]);
    printf("%p\n", a);

    return 0;
}