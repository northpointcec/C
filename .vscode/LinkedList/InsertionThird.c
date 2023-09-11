#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* insertion(struct Node *head, int data){
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    if(temp != NULL){
        temp->data = data;
        temp->next = head;
        head = temp;
    }
    return temp;
}

void main(){
    struct Node *head;
    head = insertion(head, 10);
    printf("%d", head->data);
}