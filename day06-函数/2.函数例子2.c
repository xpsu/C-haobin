/*
 * Created by 14027 2019/12/23 15:13
 */
#include <stdio.h>

// 括号中的void表示该函数不能接受数据  int表示函数返回值是int类型的数据
int f(void) {
    // 向主调函数返回10
    return 10;
}

// 函数名前面的void表示该函数没有返回值
void g(void) {
    // return 10;
    // error 与13行行首的void相矛盾
}

int main(void) {
    int j = 88;

    j = f();
    printf("%d\n", j);

    // j = g();
    // error 因为g函数没有返回值

    return 0;
}
