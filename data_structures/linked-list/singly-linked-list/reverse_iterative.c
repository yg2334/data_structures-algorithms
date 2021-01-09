#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void print(){
    struct Node* temp1 = head;
    while(temp1 != NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->next;
    }
    //print("\n");
    
}
void reverse(){
    struct Node *prev,*current,*next;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
int main()
{   
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    printf("\n");
    reverse();
    print();
}
