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

// 定义一个函数，判断是否为素数
bool isPrime(int num) {
    int k = (int) sqrt((double) num);

    for (int i = 2; i <= k; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int num;

    printf("请输入要判断的数字：");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("yes!");
    } else {
        printf("no!");
    }

    return 0;
}