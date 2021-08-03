/*
 * Created by 14027 on 2019/12/19 16:39.
 * 需求：求1+2+3+...+99+100的和
 *
 */
#include <stdio.h>

int main(void) {
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i <= 10; ++i) {
        sum1 = sum1 + i;
    }

    printf("\n");

    for (int i = 0; i <= 10; i++) {
        sum2 = sum2 + i;
        printf("A ");
        printf("%d ", i);
    }

    // printf("%d\n", sum1);
    // printf("%d\n", sum2);

    return 0;
}
