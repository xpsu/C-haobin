/*
 * Created by 14027 2019/12/27 21:31
 */
#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int age;
    double score;
};

void InputStudent(struct Student *);
void OutputStudent(struct Student);

int main(void) {
    struct Student jack;

    // 对结构体变量输入,必须传地址，因为要操作的是主函数的变量，不是In函数的变量
    InputStudent(&jack);

    // 对结构体变量输出,直接传整个结构体
    OutputStudent(jack);

    return 0;
}

void InputStudent(struct Student *pIn){
    // 枚举类型
    strcpy(pIn->name, "jack");
    pIn->age = 20;
    pIn->score = 50.5;
}

void OutputStudent(struct Student Out) {
    printf("姓名：%s\n", Out.name);
    printf("年龄：%d\n", Out.age);
    printf("成绩：%lf\n", Out.score);
}