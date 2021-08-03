/*
 * Created by 14027 2019/12/30 19:59
 * 需求：
 *      求1+1/2+1/3+...+1/100
 */
#include <stdio.h>

int main(void) {
    double sum = 0;

    for (int i = 1; i <= 100; ++i) {
        sum += 1.0 / i;
    }

    printf("%lf\n", sum);

    return 0;
}
