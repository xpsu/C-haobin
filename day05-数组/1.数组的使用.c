/*
 * Created by 14027 2019/12/22 17:12
 */
#include <stdio.h>

int main(void) {
    // a是数组的名字，5表示数组元素个数
    // 数组元素的名称分别为:a[0] a[1] a[2] a[3] a[4]
    int a[5] = {10, 20, 30, 40, 50};

    // 遍历数组
    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
