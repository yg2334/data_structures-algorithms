//Inserting a node at the end of doubly linked list
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
    
};

struct Node* head;

void insert(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        newnode->prev = NULL;
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp ;
}

void print(){
    struct Node* temp = head;
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    head = NULL;
    insert(4);
    insert(5);
    insert(7);
    print();
    insert(9);
    print();
}

