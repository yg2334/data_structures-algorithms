//Deleting node at beginning of the list
#include <stdlib.h>
#include <stdio.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
void insert(int x){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
}
void print(){
    struct Node* temp = head;
    while(temp != NULL){
        printf(" %d ",temp->data);
        temp = temp->next;
    }
}
void delete(){
    if(head == NULL){
        printf("The list is empty");
        return;
    }
    struct Node* temp1 = head;
    head = temp1->next;
    free(temp1);
}
int main()
{
    head = NULL;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(8);
    print();
    printf("\n");
    delete();
    delete();
    print();
    
}

