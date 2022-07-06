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

bool issymm(BinaryTreeNode<int>* left,BinaryTreeNode<int>* right)
{
     if(!left or !right)
        return left==right;
    return(left->data==right->data and issymm(left->left,right->right) and issymm(left->right,right->left));
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if(root==NULL || root->left==NULL && root->right==NULL)
        return true;
    return issymm(root->left,root->right);
}
