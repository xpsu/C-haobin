/*
 * Created by 14027 2019/12/26 17:28
 * 需求：
 *      使用指针实现一个动态数组
 */

#include <stdio.h>
#include <malloc.h>

int main(void) {
    int a[5];
    // 每个元素占4个字节，总共需要4*5=20个字节的内存空间
    int lenth;

    // 构造动态一维数组
    printf("请输入数组元素的个数：");
    scanf("%d", &lenth);
    int *pArr = (int *) malloc(4 * lenth);
    /* 本行动态的构造了一个一维数组
     *      该一维数组的产度是lenth, 该数组的数组名是pArr,
     *      该数组的每个元素是int类型  类似于 int pArr[len];
     *
     * 该行含义：
     *      向系统申请4*lenth个字节的内存空间，然后定义为整型指针
     *      然后赋给指针变量pArr
     */

    // 初始化该动态一维数组
    for (int i = 0; i < lenth; ++i) {
        printf("请输入第%d个元素：", i + 1);
        scanf("%d", &pArr[i]);
        /*
         * 数组名实际上就是第一个元素的地址,数组名其实就是一个指针变量
         * a[5]可以理解为指针a往后移5个单元
         *
         * 数组名和指针名是等价的
         *
         */
    }

    // 输出该数组
    printf("该数组的内容为：");
    for (int j = 0; j < lenth; ++j) {
        printf("%d ", pArr[j]);
    }

    // 释放掉pArr指向的内存并置空
    free(pArr);
    pArr = NULL;

    return 0;
}
/*
 * 总结：
 *      静态内存：提前分配，程序结束时自动释放
 *      动态内存：按需分配，使用时再去申请，用完手动释放
 */