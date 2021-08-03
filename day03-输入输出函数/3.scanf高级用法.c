//
// Created by 14027 on 2019/12/16.
//
#include <stdio.h>

int main(void) {
    // 含有非输入控制符
    int i;

    scanf("k%d", &i);
    // k123是正确输入，123非法输入
    printf("i=%d\n", i);

    // 对非法输入的处理
    int j;
    char ch;

    while ((ch = getchar()) != '\n')
        continue;
    scanf("%d", &j);
    printf("j = %d\n", j);

    return 0;
}
