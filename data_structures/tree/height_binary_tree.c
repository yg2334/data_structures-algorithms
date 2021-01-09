//Finding Height of a Binary Tree

#include <stdlib.h>
#include <stdio.h>

struct bstNode{
    int data;
    struct bstNode* right;
    struct bstNode* left;
};

struct bstNode* root;

struct bstNode* GetNewNode(int data){
    struct bstNode* newnode = (struct bstNode*)malloc(sizeof(struct bstNode));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct bstNode* insert(struct bstNode* root, int data){
    if(root == NULL){
        GetNewNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
    
}

int FindHeight(struct bstNode* root){
    if(root == NULL){
        return 0;
    }
    else{
    int right_hgt = FindHeight(root->right);
    int left_hgt = FindHeight(root->left);
        if(right_hgt > left_hgt){
        return right_hgt + 1;
        }
        else{
        return left_hgt + 1;
        }
    }
}

int main()
{
    root = NULL;
    root = insert(root,2);
    root = insert(root,8);
    root = insert(root,6);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,1);
    
    printf("insertion successful \n");
    
    int height = FindHeight(root);
    printf(" %d ",height);
}

