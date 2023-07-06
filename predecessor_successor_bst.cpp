#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
int inpre(BinaryTreeNode<int>* root){
    if(root == NULL) return -1;
    root=root->left;
    while(root->left!=NULL && root->right!=NULL){
        root=root->right;
    }
    return root->data;
}
int insuc(BinaryTreeNode<int>* root){
    if(root==NULL) return -1;
    root=root->right;
    while(root->right !=NULL && root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
void help(BinaryTreeNode<int>* root,int key,pair<int,int>&p){
    if(root==NULL)
    {
        return ;
    }
    if(root->data == key){
        if(root->left) p.first = inpre(root);
        if(root->right) p.second = insuc(root);
        return ;
    }
    if(root->data<key){
        p.first = root->data;
        help(root->right,key,p);
    }
    else{
        p.second = root->data;
        help(root->left,key,p);
    }
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    pair<int,int>p;
    p.first=-1;
    p.second=-1;
    help(root,key,p);
    return p;
}
