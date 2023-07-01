#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getInOrderTraversal(TreeNode *root)
{
    //iterative inorder
    stack<TreeNode *>s;
    vector<int>ans;
    TreeNode * temp=root;
    while(!s.empty() || temp){
        while(temp){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        ans.push_back(temp->data);
        temp=temp->right;
    }
    return ans;
}
