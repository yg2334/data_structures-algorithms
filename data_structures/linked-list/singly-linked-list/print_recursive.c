//Printing linked list in forward and backward using recursion
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head ;
void insert(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = head;
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
void print_forw(struct Node* head){
    printf(" %d ",head->data);
    if(head->next == NULL){
        return;
        }
        print_forw(head->next);
        
}
void print_back(struct Node* head){
    if(head == NULL){
        return; }
        print_back(head->next);
        printf(" %d ",head->data);
    
}
int main(){
    head = NULL;
    insert(3);
    insert(5);
    insert(6);
    insert(1);
    print();
    print_forw(head);
    printf("\n");
    print_back(head);
    
}

