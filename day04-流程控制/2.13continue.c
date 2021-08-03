/*
 * Created by 14027 2019/12/22 2:03
 */
#include <stdio.h>

int main(void) {
    int i,j;
    char ch;

    printf("请输入一个数：");
    scanf("%d", &i);
    printf("i = %d\n", i);

    // 作用：清空上面的代码遗留的输入
    while ((ch = getchar()) != '\n')
        continue;

    printf("请输入一个数：");
    scanf("%d", &j);
    printf("j = %d\n", j);

    return 0;
}
