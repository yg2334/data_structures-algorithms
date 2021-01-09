// Array Implementation of Queue
#include <stdlib.h>
#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

int isFull(){
    if(rear == MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(front == -1 && rear == -1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int x){
    if(isFull() == 1){
        return;
    }
    else if(isEmpty() == 1){
        front = rear =0;
    }
    else{
        rear = rear+1;
    }
    queue[rear] = x;
}

void dequeue(){
    if(isEmpty() == 1){
        return;
    }
    else if(rear == front){
        rear = front =-1;
    }
    else{
        front = front + 1;
    }
}

void print(){
    if(isEmpty() == 1){
        printf("empty queue");
        return;
    }
    for(int i= front;i<= rear;i++){
        printf(" %d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(1);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
}

