vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int>* > q;
    q.push(root);
    vector<int>ans;
    if(root==NULL)
    return ans;
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            BinaryTreeNode<int> * temp=q.front();
            q.pop();
            ans.push_back(temp->val);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    return ans;
}
