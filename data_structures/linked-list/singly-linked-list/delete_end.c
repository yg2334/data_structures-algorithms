//Deleting node at the end of the list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void print(){
    struct Node* temp1 = head;
    while(temp1 != NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->next;
    }
}

void delete(){
    if(head == NULL){
        printf("list is empty");
        return;
    }
    else if(head->next == NULL){
        head = NULL;
        free(head);
        printf("Only node in the list is deleted");
        return;
    }
    struct Node* temp = head;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    while(temp->next !=NULL){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = NULL;
    free(temp);
}

int main(){
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    printf("\n");
    delete();
    print();
}
