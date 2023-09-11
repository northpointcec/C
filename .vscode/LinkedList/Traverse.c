#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

void traverse(struct Node *cur){

    while(cur != NULL){
        printf("%d ", cur->data);
        cur = cur -> next ;
    }

}
void main(){
    struct Node *head = NULL;
    struct Node *first = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    //    head->data=10;
    //    head->next=NULL;
    first->data = 10;
    second->data = 20;
    third->data = 30;
    first->next=second;
    second->next = third;
    third->next = NULL;

    head = first;

    traverse( head);
}