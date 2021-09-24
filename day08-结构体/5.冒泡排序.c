/*
 * Created by 14027 2019/12/27 21:06
 */
#include <stdio.h>

// 定义函数：把数组遍历输出
void traverse(int *p, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", p[i]);
    }
}

// 定义函数：把传入的数组升序排序
void sort(int *p, int length) {
    // i表示没有排好的数
    for (int i = 0; i < length - 1; ++i) {
        // j表示要排的数
        for (int j = 0; j < length - 1 - i; ++j) {
            if (p[j] > p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    int a[7] = {2, 9, -34, 76, 0, 100, 10};

    int length = sizeof(a) / sizeof(a[0]);

    sort(a, length);
    traverse(a, length);

    return 0;
}
