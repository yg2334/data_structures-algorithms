//Creating and displaying a doubly linked list

//Inserting  a node at the beginning of doubly linked list
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
    newnode->next = head;
    newnode->prev = NULL;
    if(head != NULL){
        head->prev = newnode;
    }
    head = newnode;
}
void print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
   head= NULL;
   insert(3);
   insert(6);
   insert(4);
   insert(7);
   print();
   
}

