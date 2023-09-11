#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *tail;

struct Node* creatNode(int data){

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Memory allocation failed");
        exit(1);
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insert(int data){
    struct Node *newNode = creatNode(data);
    if(head == NULL){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
}
void traverse(){
    struct Node *cur;
    cur = head;
    while (cur != NULL)     
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    
}
void main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    traverse();
}
