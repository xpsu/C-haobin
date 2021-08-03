/*
 * Created by 14027 2019/12/27 21:06
 * 需求：
 *      使用指针、动态数组实现学生管理系统
 *      实现输入储存、排序、输出
 *
 */
#include <stdio.h>
#include <malloc.h>

// 定义结构体Student,模拟学生
typedef struct Students{
    char name[100];
    int age;
    double score;
} Student;

// 定义函数：对结构体Student输入
void inputStudent(Student *, int);

// 定义函数：对成绩降序排序
void sort(Student *, int);

// 定义函数：对结构体Student输出
void outputStudent(Student *, int);

int main(void) {
    // 输入学生个数
    int length;
    printf("请输入学生个数：");
    scanf("%d", &length);

    // 构造一个动态数组，数组的元素是结构体
    Student *pStu = (Student *) malloc(length * sizeof(Student));

    // 判断动态内存是否申请成功
    if (pStu == NULL) {
        printf("内存分配失败，程序终止！\n");
        return -1;
    }
    // 输入
    inputStudent(pStu, length);

    // 排序，冒泡算法
    sort(pStu, length);

    // 输出
    printf("排名情况为：\n");
    outputStudent(pStu, length);

    // 释放动态内存并置空
    free(pStu);
    pStu = NULL;

    return 0;
}

void inputStudent(Student *pStu, int length) {
    for (int i = 0; i < length; ++i) {
        printf("请输入第%d个学生的信息：\n", i + 1);
        printf("姓名：");
        scanf("%s", pStu[i].name);
        // name是数组名，本身就已经是数组首元素的地址,
        // 所以pArr[i].name 不能改成 &pArr[i].name

        printf("年龄：");
        scanf("%d", &pStu[i].age);
        printf("成绩：");
        scanf("%lf", &pStu[i].score);
        printf("\n");
    }
}

void sort(Student *pStu, int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - 1 - i; ++j) {
            if (pStu[j].score < pStu[j + 1].score) {
                Student  temp = pStu[j];
                pStu[j] = pStu[j + 1];
                pStu[j + 1] = temp;
            }
        }
    }
}

void outputStudent(Student *pStu, int length) {
    for (int j = 0; j < length; ++j) {
        printf("第%d名 ", j + 1);
        printf("姓名:%s 成绩:%lf 年龄:%d \n", pStu[j].name, pStu[j].score, pStu[j].age);
    }
}
/*
 * 总结：
 *      在动态内存中，pArr是一个地址常量，类似于数组名
 */