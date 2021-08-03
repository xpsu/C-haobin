/*
 * Created by 14027 2019/12/22 0:32
 * 需求：了解do...while的使用
 *      常用于人机交互
 */
#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    double delta;
    double x1, x2;
    char ch;

    do {
        printf("请输入a,b,c三个系数：\n");
        printf("a=");
        scanf("%d", &a);

        printf("b=");
        scanf("%d", &b);

        printf("c=");
        scanf("%d", &c);

        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("此方程有两个实数解，x1=%lf x2=%f\n", x1, x2);
        } else if (delta == 0) {
            x1 = x2 = (1.0 * -b) / (2 * a);
            printf("此方程有且仅有一个实数解，x=%lf\n", x1);
        } else {
            printf("此方程没有实数解\n");
        }

        printf("您想继续吗(Y/N):");
        scanf(" %c", &ch);
        // %c前面必须得加一个空格 原因略
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
