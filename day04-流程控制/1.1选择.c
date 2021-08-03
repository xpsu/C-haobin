/*
 * Created by 14027 on 2019/12/18 16:06
 *
 */
#include <stdio.h>

int main(void) {
    // if的用法
    if (3 > 2) {
        printf("AAA\n");
    }
    printf("BBB\n");
    // if只能控制一个语句


    // if..else用法
    if (3 < 6) {
        printf("GGG\n");
    } else {
        printf("KKKK\n");
    }


    // if..else if..else的用法
    double delta = -1;

    if (delta > 0) {
        printf("有两个解!\n");
    } else if (delta == 0) {
        printf("有一个唯一解!\n");
    } else {
        printf("无解!\n");
    }

    return 0;
}
