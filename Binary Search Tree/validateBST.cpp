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
bool isValid(BinaryTreeNode<int> *root, int min, int max)
{
        if(!root) return true;
        if(root->data > max || root->data < min)
            return false;
        return (isValid(root->left, min, root->data) && isValid(root->right, root->data, max));
}
bool validateBST(BinaryTreeNode<int> *root){
    return isValid(root, INT_MIN, INT_MAX);
}
