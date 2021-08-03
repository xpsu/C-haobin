/*
 * Created by 14027 2019/12/22 17:32
 */
#include <stdio.h>

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int tmp;
    int j = 4;

    for (int i = 0; i < j; ++i) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;

        --j;
    }

    for (int i = 0; i < 5; ++i) {
        printf("%d\n", a[i]);
    }

    return 0;
}
