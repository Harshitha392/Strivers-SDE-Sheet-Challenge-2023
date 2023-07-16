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

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
    if(root==NULL) return -1;
	int L = lowestCommonAncestor(root->left,x,y);
    int R = lowestCommonAncestor(root->right,x,y);
    if(root->data == x)
    return root->data;
    if(root->data == y)
    return root->data;
    if(L == -1) return R;
    if(R == -1) return L;
    return root->data;
}
