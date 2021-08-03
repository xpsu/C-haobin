/*
 * Created by 14027 2019/12/30 19:59
 */
#include <stdio.h>

int main(void) {
    int sum1 = 0, sum2 = 0;
    int cnt1 = 0, cnt2 = 0;
    double ave1, ave2;

    // 偶数
    for (int i = 2; i <= 100; i += 2) {
        sum1 += i;
        cnt1++;
    }
    ave1 = 1.0 * sum1 / cnt1;
    printf("偶数的平均值ave1为：%lf\n", ave1);
    printf("偶数的个数cnt1为：%d\n", cnt1);

    // 奇数
    for (int i = 1; i <= 100; i += 2) {
        sum2 += i;
        cnt2++;
    }
    ave2 = 1.0 * sum2 / cnt2;
    printf("偶数的平均值ave1为：%lf\n", ave2);
    printf("偶数的个数cnt1为：%d\n", cnt2);

    return 0;
}
