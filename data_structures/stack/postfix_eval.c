//Postfix evaluation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define  MAX 101
char ex[101];
int top = -1;
int n1,n2,n3;
char ch;

void push(char x){
    top++;
    ex[top] = x;
}

int pop(){
    if(top== -1){
        printf("stack underflow");
        return;
    }
    int item = ex[top];
    top--;
    return item;
}


void postfixEval(char ex[]){
    int n = strlen(ex); 
    for(int i =0;i<n;i++){
        ch = ex[i];
        if(isdigit(ch)){
            push(ch - '0');
        }
        else if(ex[i]=='*' || ex[i]=='+' || ex[i]=='-' || ex[i]=='/'){
            n1 = pop();
            n2= pop();
            switch(ex[i]){
                case '*' : n3 = n1*n2;
                break;
                case '+' : n3 = n1+n2;
                break;
                case '-' : n3 = n1-n2;
                break;
                case '/' : n3 = n1/n2;
                break;
            
            }
            push(n3);
        }
        
            
    }
    printf("result : %d",pop());
}

int main()
{
    char c[] = "12345*+*+";
    postfixEval(c);
    
}

