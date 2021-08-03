/*
 * Created by 14027 2019/12/26 16:05
 */
#include <stdio.h>

int main(void) {
    int i = 99;
    double j = 55.2;
    char ch = 'A';

    int *p = &i;
    double *q = &j;
    char *r = &ch;

    printf("int整型指针变量p的大小为：%llu 字节\n", sizeof(p));
    printf("double浮点型指针变量q的大小为：%llu 字节\n", sizeof(q));
    printf("char字符型指针变量r的大小为：%llu 字节\n", sizeof(r));

    return 0;
}