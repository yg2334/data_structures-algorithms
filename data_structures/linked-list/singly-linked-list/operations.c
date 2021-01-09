
/*
// Creating and displaying a linked list and inserting a element at the beginning
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    temp -> data = x;
    temp -> next = head;
    head = temp;

}
void print(){
    struct Node* temp1 = head;
    while(temp1 != NULL){
        printf("List is : %d ",temp1->data);
        temp1 = temp1 -> next;
    }
}
int main(){
    head = NULL;
    int n,x;
    do{ 
        printf("Enter a number to the list : \n");
        scanf("%d",&x);

        insert(x);
        print();


        printf("Do you want to add number in the list(0/1)? : \n");
        scanf("%d",&n);

    }
    while(n == 0);
}
*/
/*
//Inserting node at nth position

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x, int n){
    struct  Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
        temp1 -> data = x;
        temp1 -> next = NULL;
    if(n == 1){

        temp1 -> next = head;
        head = temp1;
        return;
    }
    
    struct Node* temp2 = head;
    for(int i=0;i<n-2;i++){
        temp2 = temp2->next;
        }
    
        temp1 -> next = temp2 -> next;
        temp2 -> next = temp1;
    
}
void print(){
    struct Node* temp = head;
	printf("List is:");
    while(temp != NULL)
    {   printf(" %d ",temp->data);
        temp = temp-> next;
    }
    
}



int main(){
    head = NULL;
    insert(4,1);
    insert(3,2);
    insert(6,3);
    insert(2,2);
    insert(5,3);
	

    print();
}
*/
/*
//Inserting a node at the ending of the list
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void insert(int x){
	struct Node* temp = head;
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1->data = x;
	temp1->next = NULL;
	if(head == NULL){
		temp1->next = head;
		head = temp1;
	}
	
	while(temp->next != NULL){
		temp = temp->next;
}
	temp->next = temp1;

}

void print(){
	struct Node* temp = head;
	printf("List is : ");
	while(temp != NULL){
	printf(" %d ",temp->data);
	temp = temp->next;
}
	printf("\n");
}

int main(){
	head = NULL;
	insert(3);
	insert(4);
	insert(5);

	print();

}
*/

//Deleting a node at nth position
/*
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

void insert(int x,int n){
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 -> data = x;
	temp1 -> next = NULL;

	if(n==1){
		temp1->next = head;
		head = temp1;
		return;
}
	struct Node* temp2 = head;
	for(int i=0;i<n-2;i++){
		temp2 = temp2 -> next;
}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
}

void print(){
	struct Node* temp = head;
	printf("List is : ");
	while(temp != NULL){
		printf(" %d ",temp->data);
		temp = temp -> next;	
}
	printf("\n");
}
void delete(int n){
	struct Node* temp = head;
	struct Node* temp1 =(struct Node*)malloc(sizeof(struct Node));
	if(n==1){
	head = temp->next;
	free(temp);
	return;
}
	for(int i=0;i<n-2;i++){
		temp = temp->next;
}
	
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
}
int main(){
	head = NULL;
	insert(4,1);
	insert(3,2);
	insert(5,3);
	insert(7,4);
	insert(8,3);
	print();

	delete(1);
	print();
}
*/

//Reversing a linked list using iterative method
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct Node