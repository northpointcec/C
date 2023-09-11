#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void main(){
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    printf("%d", head->data);

}