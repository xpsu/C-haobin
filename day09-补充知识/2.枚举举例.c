/*
 * Created by 14027 2019/12/28 15:29
 */
#include <stdio.h>

// 只定义了一个数据类型，并没有定义变量， 该数据类型的名字是 enum WeekDay
enum WeekDay {
    Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
// 第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。

// 定义一个函数：输入英语星期，返回中文
void f(enum WeekDay i) {
    switch (i) {
        case 1:
            printf("星期一!\n");
            break;
        case 2:
            printf("星期二!\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四!\n");
            break;
        case 5:
            printf("星期五!\n");
            break;
        case 6:
            printf("星期六!\n");
            break;
        case 7:
            printf("星期天!\n");
            break;
    }

}

int main(void) {
    f(Friday);

    return 0;
}
