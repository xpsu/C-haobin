/*
 * Created by 14027 on 2019/12/18 21:32.
 * 需求：三个数排序，a最大，c最小
 */
#include <stdio.h>

int main(void) {
    int a, b, c;
    int tmp;
    // 定义临时变量

    printf("请输入三个数字，用空格作为分隔：");
    scanf("%d %d %d", &a, &b, &c);

    // 思路:冒泡排序
    // 如果a小于b，就把交换两者
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    // 如果a小于c，就把交换两者,此时a完成排序
    if (a < c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    // 如果b小于c，就把交换两者，
    if (b < c) {
        tmp = b;
        b = c;
        c = tmp;
    }

    printf("%d>%d>%d\n", a, b, c);

    return 0;
}
