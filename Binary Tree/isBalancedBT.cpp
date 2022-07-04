/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
 int dfstree(BinaryTreeNode<int>* root)
    {
        if(root==NULL)
            return 0;
        int lh=dfstree(root->left);
        if(lh==-1)
            return -1;
        int rh=dfstree(root->right);
        if(rh==-1)
            return -1;
        if(abs(lh-rh)>1)
            return -1;
        return 1+max(rh,lh);
    }
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    if(dfstree(root)==-1)
        return false;
    else
        return true;
}
