/*
 * Created by 14027 2019/12/26 22:04
 * 需求：
 *      多级指针：套娃
 */
#include <stdio.h>

int main(void) {
    int i = 10;

    // p只能存放int类型变量的地址
    int *p = &i;

    // q是int **类型， 所谓int **类型就是指q只能存放int *类型变量的地址
    int **q = &p;

    // r是int ***类型, 所谓int ***类型就是指r只能存放int **类型变量的地址,
    int ***r = &q;

    // ***r其实就是i
    printf("%d\n", ***r);

    return 0;
}