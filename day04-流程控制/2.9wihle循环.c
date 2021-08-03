/*
 * Created by 14027 2019/12/21 21:33
 * 需求：使用while循环求1到100的和
 */
#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;

    /*
     * for (int i = 0; i <= 10; ++i) {
        sum1 = sum1 + i;
    }
     */
    i = 1;
    while (i <= 100) {
        sum = sum +i;
        ++i;
    }

    printf("%d\n", sum);

    return 0;
}