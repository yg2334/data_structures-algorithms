//Inserting node at the beginning of the node
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
	temp->next = head;
	head = temp;
}
void print(){
	struct Node* temp1 = head;
	while(temp1 != NULL){
		printf(" %d ",temp1->data);
		temp1 = temp1->next;
}
}

int main(){
	head=NULL;
	insert(4);
	insert(2);
	insert(9);
	insert(5);
	insert(3);
	print();
}
