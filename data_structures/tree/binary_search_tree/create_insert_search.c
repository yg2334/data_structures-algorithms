//Inserting ,creating and searching in a binary search tree
#include <stdlib.h>
#include <stdio.h>

struct bstNode{
    int data;
    struct bstNode* left;
    struct bstNode* right;
    
};

struct bstNode* GetNewNode(int data){
    struct bstNode* newnode = (struct bstNode*)malloc(sizeof(struct bstNode));
    newnode->data = data;
    newnode->right = newnode->left = NULL;
    return newnode;
}

int search(struct bstNode* root,int data){
    if(root == NULL){return 0;}
    else if(data == root->data){return 1;}
    else if(data <= root->data){return search(root->left,data);}
    else{return search(root->right,data);}
    
}


struct bstNode* insert(struct bstNode* root,int data){
    if(root == NULL){
        root = GetNewNode(data);
        
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
        
    }
    else{
        root->right = insert(root->right,data);
    }
    //printf("inserted successfully \n");
    return root;
}
int main()
{   int n;
    struct bstNode* root ;
    root = NULL;
    root = insert(root,3);
    root = insert(root,5);
    root = insert(root,6);
    root = insert(root,1);
    
    printf("enter number to be searched:");
    scanf("%d",&n);
    if(search(root,n) == 1){
        printf("found \n");
    }
    else{
        printf("not found \n");
    }
}

