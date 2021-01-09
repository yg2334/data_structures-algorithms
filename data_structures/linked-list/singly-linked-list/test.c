#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;    
	struct Node* next;
};

struct Node* head;

void insert(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	
	struct Node* temp1 = head;
	if(temp1 == NULL){
		temp1->next = temp;
}
	
	while(temp1->next != NULL){
		temp1 = temp1->next;
}
	temp1->next = temp;
	
}

void print(){
	struct Node* temp2 = head;
	while(temp2 != NULL){
		printf(" %d ",temp2->data);
		temp2 = temp2->next;
}
}

int main(){
	head = NULL;
	insert(4);
	insert(3);
	insert(8);
	insert(2);

	print();
}
