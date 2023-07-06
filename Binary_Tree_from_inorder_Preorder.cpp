#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int> *BuildBT(map<int,int>&m,int n,vector<int>&inorder , vector<int>&preorder , int instart,int inend,int prestart,int preend){
    if(prestart>preend || instart>inend) return NULL;
    TreeNode <int> *root = new TreeNode<int> (preorder[prestart]);
    int nodes_left = m[root->data] -instart;
    root->left = BuildBT(m,n,inorder,preorder,instart,m[root->data]-1,prestart+1,prestart+nodes_left);
    root->right = BuildBT(m,n,inorder,preorder,m[root->data]+1,inend,prestart+nodes_left+1,preend);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	map<int,int>m;
    int n=inorder.size();
    for(int i=0;i<n;i++){
        m[inorder[i]]=i;
    }
    int instart =0;
    int inend=n-1;
    int prestart = 0;
    int preend = n-1;
    TreeNode<int>*root= BuildBT(m,n,inorder,preorder,instart,inend,prestart,preend);
    return root;
}
