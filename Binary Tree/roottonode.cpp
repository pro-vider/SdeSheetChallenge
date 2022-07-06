/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool getpath(TreeNode* root,vector<int>& ans,int x)
 {
    if(!root)
        return false;
    ans.push_back(root->val);
    if(root->val==x)
        return true;
    if(getpath(root->left,ans,x) or getpath(root->right,ans,x))
       return true;
    ans.pop_back();
    return false;           
 }
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> ans;
    if(!A)
    return ans;
    getpath(A,ans,B);
    return ans;
}
