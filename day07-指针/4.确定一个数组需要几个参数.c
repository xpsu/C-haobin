/*
 * Created by 14027 2019/12/26 15:11
 * 需求：
 *      数组名就是a[0]的地址
 *      确定一个数组需要数组名、长度两个参数
 *          数组名a[0]表示数组开始的内存地址
 *          长度表示在什么地址结束
 */
#include <stdio.h>

// 定义一个函数输出一维数组的内容
void f(int *pArr, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", pArr[i]);
        // *(pArr+i) 等价于 pArr[i]
        // 也等价于 a[i] 也等价于 *(a+i)
    }
    printf("\n");
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = {-1, -2, -3, -4, -5, -6};
    int c[100] = {1, 99, 22, 33};

    f(a, 5);
    f(b, 6);
    f(c, 4);

    return 0;
}


