/*
 * Created by 14027 2019/12/26 23:26
 */
#include <stdio.h>

void f(int **q) {
    int i = 5;
    *q = &i;
}

int main(void) {
    int *p;

    f(&p);
    printf("%d\n", *p);
    // 语法没有问题，但是p违规访问了函数f的内存

    return 0;
}