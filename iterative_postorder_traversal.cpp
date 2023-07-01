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
vector<int> getPostOrderTraversal(TreeNode *root)
{
    //iterative postorder 
    vector<int>ans;
    stack<TreeNode*>s;
    while (!s.empty() || root) {
        while (root) {
            s.push(root);
            s.push(root);
            root = root->left;
        }
        if (s.empty())
            return ans;
        root = s.top();
        s.pop();
        if (!s.empty() && s.top() == root)
            root = root->right;
        else {
            ans.push_back(root->data);
            root = NULL;
        }
    }
    return ans;
}
