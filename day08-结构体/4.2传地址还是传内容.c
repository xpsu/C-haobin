/*
 * Created by 14027 2019/12/27 21:05
 * 需求：
 *      函数传参传地址还是内容
 *      指针的优点：
 *          直接传地址速度更快
 *          通过指针直接操作数据，不用再重新分配内存，更省内存
 *          运行速度更快
 */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    double score;
};

void InputStudent(struct Student *);

void OutputStudent(struct Student *);

int main(void) {
    struct Student jack;

    // 结构体Student一共占多少个字节
    printf("%llu\n", sizeof(struct Student));

    // 对结构体变量输入,必须传地址
    InputStudent(&jack);

    // 对结构体变量输出
    OutputStudent(&jack);

    return 0;
}

void InputStudent(struct Student *pIn) {
    strcpy(pIn->name, "jack");
    // 枚举类型
    pIn->age = 20;
    pIn->score = 50.5;
}

void OutputStudent(struct Student *pOut) {
    printf("姓名：%s\n", pOut->name);
    printf("年龄：%d\n", pOut->age);
    printf("成绩：%lf\n", pOut->score);
}


