#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;

};

void insertion(struct Node **head, int data){
    struct Node *temp = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node));

    if(temp != NULL){
        temp->data = data;
        temp->next = *head;
        *head = temp;
    }

}

void main(){
    struct Node *head;
    insertion(&head, 10);
    printf("%d", head->data);
}