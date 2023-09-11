#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void insertbegin(int data){
    struct Node *cur;
    cur = (struct Node *)malloc(sizeof(struct Node));

    if(cur != NULL){
        cur->data = data;
        cur->next = head;
        head = cur;
    }
}

void main(){
    insertbegin(10);
    printf("%d", head->data);
}