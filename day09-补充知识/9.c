/*
 * Created by 14027 2019/12/30 20:20
 * 需要：
 *      判断n是否是素数，是输出yes！,不是输出no！
 *
 * 思路：
 *      素数：除了一和它本身，没有数能够整除
 *      数学原理：
 *             只需要判断1-n的平方根即可
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    int n;
    int k;
    bool b = true;

    printf("请输入要判断的数字：");
    scanf("%d", &n);

    k = (int) sqrt((double) n);
    for (int i = 2; i <= k; ++i) {
        if (n % i == 0) {
            b = false;
            break;
        }
    }

    if (b) {
        printf("yes!");
    } else {
        printf("no!");
    }

    return 0;
}