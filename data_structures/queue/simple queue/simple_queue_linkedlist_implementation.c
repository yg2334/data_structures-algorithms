//Linked List Implementation Of Queue
#include <stdlib.h>
#include <stdio.h>


struct Node{
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = NULL;
    if(rear == NULL && front == NULL){
        rear = front = newnode;
        return;
        
    }
    rear->next = newnode;
    rear = newnode;
}

void dequeue(){
    struct Node* temp = front;
    if(rear == NULL && front == NULL){
        return;   
    }
    else if(rear == front){
        rear = front = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
    
}

void print(){
    if(rear == NULL && front == NULL){
        printf("empty queue");
        return;
    }
    struct Node* temp = front;
        while(temp != NULL){
            printf(" %d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
}
    

 



int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(5);
    enqueue(4);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
}

