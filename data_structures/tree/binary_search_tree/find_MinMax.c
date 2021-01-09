// Finding Min And Max Element in Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

struct bstNode{
    int data;
    struct bstNode* right;
    struct bstNode* left;
};

struct bstNode* GetNewNode(int data){
    struct bstNode* newnode = (struct bstNode*)malloc(sizeof(struct bstNode));
    newnode->data = data;
    newnode->right = newnode->left = NULL;
    return newnode;
}
    


struct bstNode* insert(struct bstNode* root, int data){
    if(root == NULL){
        root = GetNewNode(data);
        
    }
    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}

int FindMin(struct bstNode* root){
    
    if(root == NULL){
        printf("tree empty");
        return -1;
    }
    else if(root->left == NULL){
        printf("\n %d ",root->data);
        return root->data;
    }
    return FindMin(root->left);
}

int FindMax(struct bstNode* root){
    if(root == NULL){
        printf("tree empty");
        return -1;
    }
    else if(root->right == NULL){
        printf("\n %d ",root->data);
        return root->data;
    }
    return FindMax(root->right);
}

int main()
{
    struct bstNode* root = NULL;
    root = insert(root,4);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,7);
    root = insert(root,8);
    root = insert(root,9);
    printf("insertion successful");
    
    FindMin(root);
    FindMax(root);
    
}

