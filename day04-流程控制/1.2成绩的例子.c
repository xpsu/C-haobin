/*
 * Created by 14027 on 2019/12/18 17:59.
 * 需求：通过if..else if..else实现成绩分段
 */
#include <stdio.h>

int main(void) {
    // 定义成绩
    float score;

    printf("请输入您的成绩：");
    scanf("%f", &score);
    // printf("%f\n", score);

    if (score > 100) {
        printf("这是做梦\n");
    } else if (score <= 100 && score >= 90) {
        printf("您的成绩为优秀\n");
    } else if (score < 90 && score >= 80) {
        printf("您的成绩为良好");
    } else if (score < 80 && score >= 60) {
        printf("您的成绩为及格\n");
    } else if (score < 60 && score >= 0) {
        printf("您的成绩不及格，继续努力！\n");
    } else {
        printf("输入成绩过低\n");
    }

    return 0;
}

