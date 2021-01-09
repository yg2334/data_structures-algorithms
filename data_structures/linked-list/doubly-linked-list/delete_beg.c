//Deleting at beginning in doubly linked list
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
    
};
struct Node* head;

void delete(){
    struct Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next ;
    free(temp);
}

void insert(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = head;
    if(head != NULL){
        head->prev = newnode;
    }
    head = newnode;
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
    insert(6);
    insert(5);  
    insert(3);
    print();
    delete();
    print();
    delete();
    print();
   
   
}

