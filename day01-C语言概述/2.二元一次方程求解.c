//
// Created by 14027 on 2019/12/15.
// 需求：求一元二次方程ax^2+bx+c=0
//
#include <stdio.h>
#include <math.h>

int main(void) {
    // 定义a,b,c,等号表示赋值
    int a = 1;
    int b = 5;
    int c = 4;
    // 定义delta=b^2-4ac
    double delta;
    // 定义两个解
    double x1, x2;

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("此方程的两个解为: x1=%lf, x2=%lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = (double)-b / (2 * a);
        // 右边赋给左边
        printf("此方程只有一个解, x=%lf\n", x1);
    } else {
        printf("此方程无实数解。\n");
    }

    return 0;
}
