#include <stdio.h>

int main(void) {
    // 用法1打印字符串
    printf("基本使用\n");

    // 用法2打印输入参数
    int i = 1;
    printf("%d\n", i);

    // 用法3打印多个参数
    int j = 2;
    double k = 1.8;
    printf("%d %lf\n", j, k);

    // 测试%x %#x %X %#X的用法
    int l = 47;

    printf("%x\n", l);
    printf("%#x\n", l);
    printf("%X\n", l);
    printf("%#X\n", l);
    // 推荐使用最后一种

    return 0;
}
