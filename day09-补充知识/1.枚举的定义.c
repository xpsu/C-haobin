/*
 * Created by 14027 2019/12/28 15:29
 */
#include <stdio.h>

// 只定义了一个数据类型，并没有定义变量， 该数据类型的名字是 enum WeekDay
enum WeekDay {
    Monday=1, TuesDay, WednesDay, ThursDay, FriDay, SaturDay, SunDay
};
// 第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。

int main(void) {
    enum WeekDay Today = SaturDay;

    printf("%d\n", Today);

    return 0;
}
