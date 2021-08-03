/*
 * Created by 14027 2019/12/21 16:13
 * 需求：比较++i与i++的区别
 */
#include <stdio.h>

int main(void) {
    int i = 1;
    int j = 1;
    int m, n;

    m = ++i;
    printf("前自增：%d, i=%d\n", m, i);

    n = j++;
    printf("后自增：%d, j=%d\n", n, j);

    return 0;
}
/*
 * 总结：
 *      相同：
 *          都使i,j加1
 *      不同：
 *          前自增整体表达式的值是自增之后的值
 *          后自增整体表达式的值是自增之前的值
 *
 */
