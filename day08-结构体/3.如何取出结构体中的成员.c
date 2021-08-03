/*
 * Created by 14027 2019/12/27 17:34
 */
#include <stdio.h>

// 这里只定义了一种新型的变量类型
struct Student {
    int age;
    double score;
    char sex;
};

int main(void) {
    // 类似于数组，只能在定义时整体赋值
    struct Student job = {24, 85.5, 'G'};

    // 初始化
    struct Student jack;

    // 赋值
    jack.age = 20;
    // 72.5默认为double类型
    jack.score = 72.5;
    jack.sex = 'B';

    // 第一种：结构体变量.属性
    printf("%lf\n", jack.score);

    // 第二种：使用指针,p->score  相当于 (*P).score
    struct Student *p = &jack;
    printf("%d\n", p->age);

    return 0;
}
