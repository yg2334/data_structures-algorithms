// Implementation of stack using linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
};
struct Node* top;
void push(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void print(){
   if(top==NULL){
       printf("stack empty");
       printf("\n");
       return;
   } 
   struct Node* temp = top;
   printf("Stack =");
   while(temp != NULL){
       printf(" %d ",temp->data);
       temp = temp->link;
   }
   printf("\n");
}
void pop(){
    if(top == NULL){
        printf("stack is empty, cannot pop");
        printf("\n");
        return;
    }
    struct Node* temp1;
    temp1 = top;
    top= temp1->link;
    free(temp1);
}
void Top(){
    struct Node* temp = top;
    printf("Top element = %d",temp->data);
    printf("\n");
}
void isEmpty(){
    if(top == NULL){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
}

int main()
{
    top= NULL;
    push(3);
    push(6);
    push(9);
    print();
    pop();
    print();
    push(4);
    print();
    Top();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    isEmpty();
}

