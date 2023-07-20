#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	if(root==NULL) return NULL;
    if(root->data > P->data && root->data> Q->data)
    return LCAinaBST(root->left,P,Q);
    if(root->data<P->data && root->data<Q->data)
    return LCAinaBST(root->right,P,Q);
    if(root->data == P->data) return P;
    if(root->data ==Q->data) return Q;
    TreeNode<int>* L1 = LCAinaBST(root->left,P,Q);
    TreeNode<int>* R1 = LCAinaBST(root->right,P,Q);
    if(L1!=NULL && R1!=NULL) return root;
    if(L1) return L1;
    return R1;
}
