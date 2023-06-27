vector<int> getLeftView(TreeNode<int> *root)
{
    vector<vector<int>>ans;
    vector<int>ans1;
    if(root==NULL)
    return ans1;
    queue<TreeNode<int>*>q;
    q.push(root);
    q.push(root);
    int val;
    while(!q.empty()){
        int n=q.size();
        vector<int>v2;
        for(int i=0;i<n;i++){
            TreeNode <int>*temp1=q.front();
            q.pop();
            v2.push_back(temp1->data);
            if(temp1->left)
                q.push(temp1->left);
            if(temp1->right)
                q.push(temp1->right);
            
        }
        ans.push_back(v2);
    }
    for(int i=0;i<ans.size();i++){
        ans1.push_back(ans[i][0]);
    }
    return ans1;
}
