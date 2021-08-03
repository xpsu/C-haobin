/*
 * Created by 14027 2019/12/22 17:31
 */
#include <stdio.h>

int main(void) {
    // 定义一个二维数组
    int a[3][4] = {{1,  2,  4,  5},
                   {6,  7,  8,  9},
                   {10, 11, 12, 13}};

    // 输出该数组
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%-4d", a[i][j]);
            // -表示左对齐，4表示占五个位置
        }
        printf("\n");
    }

    return 0;
}


