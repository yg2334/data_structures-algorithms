
//Inserting a node at the end 
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
void insert(int x){
    struct Node* temp = head;
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    new->data = x;
    new->next = NULL;
    if(head == NULL){
       //new->next = head;
       head = new;
       return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = new;
   
    
}

void print(){
    struct Node* temp1 = head;
    while(temp1 !=NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->next;
    }
}
int main()
{
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    
    print();
   


}

