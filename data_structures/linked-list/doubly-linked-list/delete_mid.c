//Deleting the nth node in a doubly linked list
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

void insert(int x, int n){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = newnode->prev = NULL;
    if(n== 1){
      newnode->next = head;
      if(head != NULL){
      head->prev = newnode;
      }
      head= newnode;
      return;
    }
    struct Node* temp = head;
    for(int i=0;i<n-2;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    if(newnode->next != NULL){
        newnode->next->prev = newnode;
    }
}
    
void delete(int n){
    struct Node* temp1;
    if(n==1){
        temp1 = head;
        head = temp1->next;
        head->prev = NULL;
        free(temp1);
        return;
    }
    struct Node* temp = head;
    for(int i=0;i<n-2;i++){
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = temp1->next;
    if(temp1->next != NULL){
        temp1->next->prev = temp;
    }
    free(temp1);
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
    insert(3,1);
    insert(4,2);
    insert(2,3);
    insert(5,4);
    
    print();
    
    delete(3);
    
    //delete();
    print();
    
}

