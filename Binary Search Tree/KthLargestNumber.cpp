void inorder(TreeNode<int>* root, int &k, int &ans)
{
        if(root == NULL)
        return;
        inorder(root -> right, k, ans);
        k--;
        if(k == 0)
        {
            ans = root -> data;
            return ;
        }
        inorder(root -> left, k, ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
        int ans = -1;
        inorder(root, k, ans);
        return ans;
}
