// Implementation of Circular Queue Using Arrays

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int x){
    if(front == (rear +1)%MAX){
        printf("queue is full , cannot enqueue \n");
        return;
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
    }
    else{
        rear = (rear + 1)% MAX;
    }
    queue[rear] = x;
}

void dequeue(){
    if(rear == -1 && front == -1){
        printf("queue is empty");
        return;
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = (front+1)%MAX; 
    }
    
}

void print(){
    if(rear == -1 && front == -1){
        printf("queue is empty");
        return;
    }
    int f = front;
    int r = rear;
    if(f <= r){
        while(f <= r){
            printf(" %d ",queue[f]);
            f++;
        }
    }
    else{
        while(f <= MAX -1){
            printf(" %d ",queue[f]);
            f++;
        }
        f= 0;
        while(f <= r){
            printf(" %d ",queue[f]);
            f++;
        }
            
        
    }
    
    printf("\n");    
    
}

    


int main()
{
    enqueue(3);
    enqueue(2);
    enqueue(6);
    enqueue(4);
    enqueue(7);
    enqueue(1);
    enqueue(9);
    enqueue(8);
    enqueue(5);
    enqueue(0);
    dequeue();
    dequeue();
    dequeue();
    enqueue(44);
    enqueue(19);
    enqueue(22);
    enqueue(21);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
}

