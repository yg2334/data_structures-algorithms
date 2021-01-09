//Reversing a linked list using recursion
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
    newnode->next = head;
    head= newnode;
    
}
void print(){
    struct Node* temp = head;
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
void reverse(struct Node* p){
    if(p->next==NULL){
        head = p;
        return;
    }
    reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main()
{
    head = NULL;
    insert(2);
    insert(3);
    insert(5);
    insert(8);
    print();
    printf("\n");
    reverse(head);
    print();
}

