// Level Order Traversal for Binary Tree

#include <stdlib.h>
#include <stdio.h>
#define MAX 50
struct Node* queue[MAX];
int front = -1;
int rear = -1;


void enqueue(struct Node* root){
    if(rear == MAX -1){
        printf("limit reached");
        return;
    }
    else if(rear == -1 && front == -1){
        rear = front = 0;
    }
    else{
        rear = rear +1;
    }
    queue[rear] = root;
}

void dequeue(){
    if(front == -1 && rear == -1){
        return;
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        front = front+1;
    }
}



int isEmpty(){
    if(rear == -1 && front == -1){
        return 1;
    }
    else{
        return 0;
    }
}
    



struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* Top(){
    if(front == -1 && rear == -1){
        printf("no top");
        return NULL;
    }
    return queue[front];
}

struct Node* GetNewNode(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct Node* insert(struct Node* root,int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    //printf("success /n");
    return root;
}

void levelorder(struct Node* root){
    if(root == NULL) return;
    enqueue(root);
    
    while(isEmpty() == 0){
        //printf("entering");
        struct Node* current = Top();
        printf(" %d ",current->data);
        if(current->left != NULL)  enqueue(root->left);
        if(current->right != NULL)  enqueue(root->right);
        
        dequeue();
    }
    //printf("leaving");
}
    


int main ()
{
 struct Node* root;
 root = NULL;
 root = insert(root,1);
 root = insert(root,3);
 root = insert(root,4);
 root = insert(root,8);
 root = insert(root,6);
 root = insert(root,9);
 root = insert(root,2);
 root = insert(root,7);
 root = insert(root,5); 
 root = insert(root,11); 

 levelorder(root);
 printf("%d",isEmpty());
}

