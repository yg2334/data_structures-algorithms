//Deleting at ending in doubly linked list
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
    newnode->prev = temp;
}

void delete(){
    struct Node* temp = head;
    struct Node* temp1;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    if(temp == head){
        free(temp);
        printf("all elements deleted");
        return;
    }
    temp1= temp->prev ;
    temp1->next = NULL;
    free(temp);
}

void print(){
    struct Node* temp//Deleting at ending in doubly linked list
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
    newnode->prev = temp;
}

void delete(){
    struct Node* temp = head;
    struct Node* temp1;
    
    while(temp->next != NULL){
        temp = temp->next;
    }
    if(temp == head){
        free(temp);
        printf("all elements deleted");
        return;
    }
    temp1= temp->prev ;
    temp1->next = NULL;
    free(temp);
}

void print(){
    struct Node* temp = head;
   
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    insert(3);
    insert(4);
    insert(6);
    insert(8);
    print();
    delete();
    print();
    delete();
    print();
    delete();
    print();
    delete();
    print();
} = head;
   
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    insert(3);
    insert(4);
    insert(6);
    insert(8);
    print();
    delete();
    print();
    delete();
    print();
    delete();
    print();
    delete();
    print();
}
