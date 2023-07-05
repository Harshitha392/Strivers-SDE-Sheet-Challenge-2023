#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    int count=0;
    stack<BinaryTreeNode<int>* >s;
    s.push(root);
    vector<int>ans;
    if(root==NULL)
    return ans;
    while(!s.empty()){
        int n=s.size();
        stack<BinaryTreeNode<int> *>s1;
        for(int i=0;i<n;i++){
            BinaryTreeNode<int> *temp=s.top();
            s.pop();
            ans.push_back(temp->data);
            if(count%2==0){
                if(temp->left) s1.push(temp->left);
                if(temp->right) s1.push(temp->right);
            }
            else{
                if(temp->right) s1.push(temp->right);
                if(temp->left) s1.push(temp->left);
            }
        }
        s=s1;
        count++;
    }
    return ans;
}
