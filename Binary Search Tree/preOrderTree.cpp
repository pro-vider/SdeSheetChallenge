/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/
#include<bits/stdc++.h>
  TreeNode<int>* maketree(vector<int>& preorder,int &i,int bound)
    {
        if(i==preorder.size() or preorder[i]>bound)
             return NULL;
        TreeNode<int>* root= new TreeNode<int>(preorder[i++]);
        root->left=maketree(preorder,i,root->data);
        root->right=maketree(preorder,i,bound);
        
        return root;
    }
TreeNode<int>* preOrderTree(vector<int> &preorder){
    // Write your code here.
    int i=0;
    return maketree(preorder,i,INT_MAX);
}
