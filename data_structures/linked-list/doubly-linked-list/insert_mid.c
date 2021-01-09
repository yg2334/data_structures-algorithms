//Inserting a node at the nth postion of doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

void insert(int x,int n){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    if(n == 1){
        
        newnode->next = head;
	if(head!=NULL){
	head->prev = newnode;
	}
        head = newnode;
        newnode->prev = NULL;
        return;
    }
    struct Node* temp = head;
    //struct Node* temp1;
    for(int i=0;i<n-2;i++){
        temp = temp->next;
    }
  
    
    newnode->next = temp->next;;
    temp->next = newnode;
    newnode->prev = temp;
    if(newnode->next != NULL){
        newnode->next->prev = newnode;
    }
    
}

void print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;
    insert(3,1);
    insert(5,2);
    insert(1,3);
    insert(6,1);
    insert(4,4);
    insert(22,6);
    print();
}
