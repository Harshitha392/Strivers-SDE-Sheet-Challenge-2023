if(root==NULL)
    return false;
    if(root->left==NULL && root->right==NULL)
    return root->data == x;
    while(root){
        if(root->data== x) return true;
        if(root->data>=x){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return false;
