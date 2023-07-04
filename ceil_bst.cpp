#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void find(BinaryTreeNode<int>*node , int x,int &y,int &z){
    if(node==NULL) return ;
    if(x==node->data){
        y=node->data;
        return ;
    }
    if(x<node->data){
        if(node->data<z)
        {
            z=node->data;
            y=node->data;
        }
        find(node->left,x,y,z);
    }
    else{
        find(node->right,x,y,z);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    int y=-1;
    int z;
    z=INT_MAX;
    find(node,x,y,z);
    return y;
}
