/*
 * Created by 14027 2019/12/24 23:15
 * 需求：
 *      递归:套娃，自己调用自己
 *      对于n的阶乘
 *          0! 或 1! =1
 *          n*((n-1)!)
 */
#include <stdio.h>

// 此函数功能：输入n,输出n*(n-1)
int fac(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}
/*
 * f0   1
 * f1   1
 * f2   2*f1    2*1
 * f3   3*f2    3*2*f1  3*2*1
 * f4   4*f3    4*3*f2  4*3*2*f1    2*f1
 * f5   5*f4    5*4*f3  5*4*3*f2    5*4*3*2*f1  5*4*3*2*1
 * 特点：先进后出，最先调用的最后出来
 *
 * 递归：
 *      栈：先进后出
 *
 */

int main(void) {
    int n;

    printf("请输入要求的数：");
    scanf("%d", &n);

    printf("%d\n", fac(n));

    return 0;
}
