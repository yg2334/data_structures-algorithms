//Deleting a node at the nth position
#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x,int n){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=x;
    struct Node* temp = head;
    if(n==1){
        newnode->next = head;
        head= newnode;
        return;
    }
    for(int i=0;i<n-2;i++){
        temp = temp->next;    
    }
    newnode->next = temp->next;
    temp->next= newnode;
} 

void print(){
    struct Node* temp1 = head;
    while(temp1!=NULL){
        printf(" %d ",temp1->data);
        temp1 = temp1->next;
    }
}

void delete(int n){
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp3 = head;
    if(n==1){
        temp2 = head;
        head = temp2->next;
        free(temp2);
        return;
    }
    for(int i=0;i<n-2;i++){
        temp3 = temp3->next;
    }
    temp2 = temp3->next;
    temp3->next = temp2->next;
    free(temp2);
    
 
}
int main()
{
    insert(1,1);
    insert(2,2);
    insert(3,3);
    insert(4,4);
    insert(5,5);
    
    print();
    delete(5);
    printf("\n");
    print();
    
}

