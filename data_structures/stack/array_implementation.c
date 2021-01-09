//Array Implementation Of stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 101

int a[MAX];
int top ;
void push(int x){
    if(top == MAX-1){
        printf("stack limit has been reached");
        return;
    }
    top++;
    a[top] = x;
}

void pop(){
    if(top == -1){
        printf("Stack is empty so can't be popped");
        return;
    }
    top--;
}
void isEmpty(){
    if(top == -1){
        printf("true");
    }
    else{
        printf("false");
    }
}

void Top(){
    printf("Top element: %d",a[top]);
    
}    

void print(){
    printf("Stack is :");
    for(int i=0;i<=top;i++){
        printf(" %d ",a[i]);
    }
}
int main()
{   top = -1;
    push(2);
    push(3);
    push(5);
    print();
    pop();
    printf("\n");
    print();
    push(4);
    printf("\n");
    Top();
    printf("\n");
    print();
    printf("\n");
    isEmpty();
    printf("\n");
    
    pop();
    pop();
    pop();
    pop();
    printf("\n");
    print();
    printf("\n");
    isEmpty();
    
}

