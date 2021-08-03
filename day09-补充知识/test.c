/*
 * Created by 14027 2019/12/29 20:00
 */
#include <stdio.h>
#include <malloc.h>

typedef struct Student {
    int age;
    double score;
} Stu;

int main(void) {
    /*
    char *p;
    char ch = 'A';
    p = &ch;

    printf("%c\n", *p);
     */

    /*
    Stu *pst = (Stu *) malloc(sizeof(Stu));

    printf("%#X\n", pst);
    printf("%#X\n", &pst->age);
    */

    int *p;
    *p = 5;

    return 0;
}