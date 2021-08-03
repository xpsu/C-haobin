/*
 * Created by 14027 2019/12/27 15:45
 * 需求：
 *
 */
#include <stdio.h>
#include <malloc.h>

void f(int **q) {
    // *q 等价于 p
    *q = (int *) malloc(sizeof(int));

    // **q 等价于 *p =5
    **q = 5;

    // free(*q);

}

int main(void) {
    int *p;

    f(&p);
    printf("%d\n", *p);
    // 语法没有问题，但是p违规访问了函数f的内存

    return 0;
}
