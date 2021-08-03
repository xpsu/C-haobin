/*
 * Created by 14027 2019/12/27 21:06
 */
#include <stdio.h>

// 定义函数：把数组遍历输出
void traverse(int *p, int length);

// 定义函数：对传入的数组升序排序
void sort(int *p, int length);

int main(void) {
    int a[6] = {2, 9, -34, 76, 0, 100};

    sort(a, 6);
    traverse(a, 6);

    return 0;
}

void traverse(int *p, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", p[i]);
    }
}

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

