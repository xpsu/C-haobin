/*
 * Created by 14027 2019/12/29 17:04
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

// 定义一个结构体数据类型来存放链表节点
typedef struct node {
    int data;
    // 定义一个指针变量，存放下一个节点的地址
    struct node *pNext;
} Node;

// 创建一个单链表，并返回头指针
Node *Create_list(void) {
    // 节点长度
    int length;
    // 临时存放节点的数值
    int val;

    // 在堆区创建一个头节点
    Node *pHead = (Node *) malloc(sizeof(Node));
    if (pHead == NULL) {
        printf("分配失败，程序终止！\n");
        exit(-1);
    }

    // 在静态区创建一个临时指针变量，用来存放尾节点的地址
    Node *temp = pHead;

    printf("请输入节点个数：");
    scanf("%d", &length);

    // 输入
    for (int i = 0; i < length; ++i) {
        printf("请输入第%d个节点的值：", i + 1);
        scanf("%d", &val);

        //  在堆区创建一个新节点
        Node *pNew = (Node *) malloc(sizeof(Node));
        if (pNew == NULL) {
            printf("分配失败，程序终止！\n");
            exit(-1);
        }
        // 将数据存入新节点
        pNew->data = val;

        // 将新节点挂到尾节点
        temp->pNext = pNew;

        // 将新节点变成尾节点
        temp = pNew;

    }
    // 结束链表
    temp->pNext = NULL;

    return pHead;
}

// 遍历链表
void Traverse_list(Node *pHead) {
    Node *p = pHead->pNext;

    if (p == NULL) {
        printf("这是个空链表");
    } else {
        while (p != NULL) {
            printf("%d ", p->data);
            p = p->pNext;
        }
    }

    printf("\n");
}

int main(void) {
    // 定义头节点并置空
    Node *pHead = NULL;

    // 创建链表,并将头指针指向pHead
    pHead = Create_list();

    // 遍历链表
    Traverse_list(pHead);

    // 释放动态内存并置空
    free(pHead);
    pHead = NULL;

    return 0;
}