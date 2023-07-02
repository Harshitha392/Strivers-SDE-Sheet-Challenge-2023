/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool isMirrorImage(BinaryTreeNode<int> *root1,BinaryTreeNode<int> *root2){
    if(root1==NULL && root2==NULL)
    return true;
    if(root1==NULL || root2==NULL) return false;
    if(root1->data!=root2->data) return false;
    if(isMirrorImage(root1->right,root2->left) && isMirrorImage(root1->left,root2->right))
    return true;
    return false;
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(root==NULL) return true;
    if(root->left==NULL && root->right==NULL)  
    return true;
    if(isMirrorImage(root->left,root->right))
    return true;
    return false;
}
