/*
 * Created by 14027 2019/12/25 17:15
 * 需求：
 *      使用指针，实现交换两个数的功能
 *
 */
#include <stdio.h>

void Exchange_1(int, int);

void Exchange_2(int *, int *);

int main(void) {
    int a = 1;
    int b = 2;

    Exchange_2(&a, &b);
    printf("%d %d\n", a, b);

    return 0;
}

/*
 * 为什么不能实现交换？
 *      函数内部是局部变量，函数调用完毕，内存就被释放
 */
void Exchange_1(int a, int b) {
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

/*
 * 为什么要给函数传递内存地址？
 *      传递内存地址，操作的是主函数的变量，不受函数内部局部变量的影响
 *      直接操作主函数的变量，不用再分配新的变量，效率更高
 *
 */
void Exchange_2(int *pa, int *pb) {
    int tmp;

    // p是int *, *p 是int
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}


