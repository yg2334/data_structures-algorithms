//Application of Stack : Check for Balanced Parentheses
//LAST UNCLOSED , FIRST CLOSED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 101

char ar[MAX];
int top = -1;

void push(char c){
    if(top == MAX-1){
        printf("OVERFLOW");
        return;
    }
    top++;
    ar[top] = c;
    
}

void pop(){
    if(top == -1){
        printf("stack empty cannot pop");
        return;
    }
    top--;
    
}
int match(char a,char b)
{
        if(a=='[' && b==']')
                return 1;
        if(a=='{' && b=='}')
                return 1;
        if(a=='(' && b==')')
                return 1;
        return 0;
}

void CheckBalancedParentheses(char ex[]){
    int n = strlen(ex);
    for(int i=0;i<n;i++){
        if(ex[i] == '(' || ex[i] == '{' || ex[i] == '['){
            push(ex[i]);
        }
        else if(ex[i] == ')' || ex[i] == '}' || ex[i] == ']'){
            if(top == -1){
                printf("false unbalanced error");
                return;
            }
            else if(match(ar[top],ex[i]) == 0){
                printf("false unbalanced error");
                return;
            }
            else{
                pop();
            }
        }
    }
    if(top==-1){
        printf("Balanced: valid");
        printf("\n");
    }
    else{
        printf("Unbalanced : invalid");
        printf("\n");
    }
    
}




int main()
{
    char ep[] = "{([])}";
    
    CheckBalancedParentheses(ep);

    return 0;
}

