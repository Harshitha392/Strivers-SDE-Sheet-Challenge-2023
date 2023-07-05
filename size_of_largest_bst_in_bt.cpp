#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
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
class NodeValue{
public:
    int minValue,maxValue;
    int maxSize;
    NodeValue(int minValue,int maxValue,int maxSize){
        this->minValue= minValue;
        this->maxValue=maxValue;
        this->maxSize=maxSize;
    }
};
NodeValue helper(TreeNode<int>*root){
    if(root==NULL){
        return NodeValue(INT_MAX,INT_MIN,0);
    }
    auto left = helper(root->left);
    auto right= helper(root->right);
    if(left.maxValue<root->data && root->data<right.minValue){
        return NodeValue(min(root->data,left.minValue),max(root->data,right.maxValue),left.maxSize+right.maxSize+1);
    }
    return NodeValue(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
}
int largestBST(TreeNode<int>* root) 
{
    return helper(root).maxSize;
}
