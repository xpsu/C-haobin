/*
 * Created by 14027 2019/12/23 16:49
 * 需求：判断是否是质数
 */
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int val) {
    for (int i = 2; i < val; ++i) {
        if (val % i == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int m;

    printf("请输入一个数：");
    scanf("%d", &m);

    if (isPrime(m))
        printf("Yes!\n");
    else
        printf("No!\n");

    return 0;
}
