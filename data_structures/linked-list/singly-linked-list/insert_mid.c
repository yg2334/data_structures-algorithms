//Inserting a node at a given nth position
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x, int n){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = x;
    struct Node* temp = head;
    if(n == 1){
        new->next = head;
        head = new;
        return;
    }
    for(int i=0;i<n-2;i++){
       temp = temp->next; 
    }
    new->next = temp->next;
    temp->next = new;
    
};

void print(){
    struct Node* temp1 = head;
    while(temp1 != NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->next;
    }
    
}

int main(){
    head = NULL;
    insert(2,1);
    insert(4,2);
    insert(6,3);
    insert(9,4);
    print();
    printf("\n");
    insert(17,2);
    insert(10,1);
    print();
}
