/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int> ans;
    if(!root)
        return ans;
    map<int,int> mp;
    queue<pair<TreeNode<int>* ,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto x=q.front();
        q.pop();
        TreeNode<int>* cur=x.first;
        int key=x.second;
        if(mp.find(key)==mp.end())
            mp[key]=cur->val;
        if(cur->left)
            q.push({cur->left,key-1});
        if(cur->right)
            q.push({cur->right,key+1});
    }
    for(auto x:mp)
        ans.push_back(x.second);
    return ans;
}
