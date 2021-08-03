/*
 * Created by 14027 2019/12/24 20:52
 * 需求：求1到某个数之间的所有素数
 *
 * 思路：
 *     算法：如何判断一个数n是否是素数？
 *          从2到n没有一个数能整除，如果有立即退出
 *          循环次数确定，应使用for循环
 *
 *     程序结构：
 *          定义一个函数判断是否是素数，是返回true,不是返回false
 */
#include <stdio.h>
#include <stdbool.h>

// 定义一个函数判断是否是素数，是返回true,不是返回false
bool isPrimeNum(int Num) {
    int i;

    for (i = 2; i < Num; ++i) {
        if (Num % i == 0) {
            break;
        }
    }

    if (i == Num) {
        return true;
    } else {
        return false;
    }
}

int main(void) {
    int Num;

    printf("请输入要求的数：");
    scanf("%d", &Num);

    for (int i = 2; i <= Num; ++i) {
        if (isPrimeNum(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
/* 总结：
 *      如何合理的设计函数
 *          一个函数只做一件事情,只完成一个功能
 *          尽量平行调用，不要多层嵌套调用
 */
