/*
 * Created by 14027 on 2019/12/19 18:40.
 * 习题:
 * 求1到100之间的奇数之和
 * 求1到100之间的奇数的个数
 * 求1到100之间的奇数的平均值
 * 求1到100之间的奇数之和， 再求1到100之间的偶数之和
 */
#include <stdio.h>

int main(void) {
    // 奇数、偶数和
    int sum1 = 0;
    int sum2 = 0;
    // 个数
    int geuu = 0;
    // 平均值
    double ping = 0;

    for (int i = 1; i <= 100; ++i) {
        if (i % 2 != 0) {
            sum1 += i;
            geuu += 1;
        }

        if (i % 2 == 0) {
            sum2 += i;
        }

    }

    ping = (1.0 * sum1) / geuu;
    // 1.0默认是double类型

    printf("奇数和为：%d\n", sum1);
    printf("偶数和为：%d\n", sum2);
    printf("奇数的个数为：%d\n", geuu);
    printf("奇数的平均值为：%lf\n", ping);

    return 0;
}