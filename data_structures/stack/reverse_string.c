//Reversing string using stack
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
char stack[50];
int top = -1;
char item;
void push(char x){
    if(top == MAX-1){
        printf("Stack Overflow");
        return;
    }
    top++;
    stack[top] = x;
}

char pop(){
    if(top == -1){
        printf("stack underflow");
        return 0;
    }
    item = stack[top];
    top--;
    return item;
}

void reverse(char c[]){
    int n = strlen(c);
    
    for(int i=0;i<n;i++){
       push(c[i]);
       
    }
    for(int i=0;i<n;i++){
        c[i] = pop();
    }
    
    printf("%s",c);
    
}

int main(){
    char ex[] = "hello world";
    reverse(ex);
}
