/*
 * Created by 14027 2019/12/22 1:43
 */
#include <stdio.h>

int main(void) {
    int i, j;

    for (i = 0; i < 3; ++i) {
        for (j = 1; j < 4; ++j) {
            printf("首长好！\n");
            if (j == 2) {
                break;
            }
        }
        printf("同志们好!\n");
    }

    return 0;
}
