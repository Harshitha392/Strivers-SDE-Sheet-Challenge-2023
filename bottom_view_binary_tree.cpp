#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>v;
    if(root == NULL){
        return v;
    }
    map<int,int>mp;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty()){
      auto it=q.front();
      q.pop();
      BinaryTreeNode<int>* node =it.first;
      int line =it.second;
      mp[line]=node->data;
      if(node->left){
          q.push({node->left,line-1});
      }
      if(node->right){
          q.push({node->right,line+1});
      }
    }
    for(auto it:mp){
        v.push_back(it.second);
    }
    return v;
}
