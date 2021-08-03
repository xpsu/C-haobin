/*
 * Created by 14027 2019/12/30 19:50
 * 需求：
 *      求一到一千的和
 */
#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 0; i <= 1000; ++i) {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}