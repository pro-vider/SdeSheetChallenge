/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root, int& ans,int& k)
{
    if(root==NULL)
        return;
    inorder(root->left,ans,k);
    k--;
    if(k==0)
    {
        ans=root->data;
        return;
    }  
    inorder(root->right,ans,k);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int ans=0;
        inorder(root,ans,k);
    return ans;
    
}
