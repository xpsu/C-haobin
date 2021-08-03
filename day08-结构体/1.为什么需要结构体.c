/*
 * Created by 14027 2019/12/27 17:10
 * 需求：
 *      经典例子：学生
 *      结构体：对数据的打包
 */
#include <stdio.h>

// 这里定义了一种新型的变量类型
struct Student {
    int age;
    double score;
    char sex;
};

int main(void) {
    // 用这个新的变量类型定义变量
    struct Student jack ={20,72.5, 'B'};

    return 0;
}
