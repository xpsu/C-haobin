/*
 * Created by 14027 on 2019/12/19 16:31.
 *
 */
#include <stdio.h>

int main(void) {
    if (3 > 2) {
        printf("AAA\n");
    } else if (3 > 1) {
        printf("BBB\n");
    } else {
        printf("CCC\n");
    }
    // 第8行条件成立，剩下的10-14就不再执行，节省了资源
    // 整个if代码块只会执行一个语句。整体上相当于一个语句

    return 0;
}
