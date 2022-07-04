/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int> ans;
    if(!root)
        return ans;
    map<int,int> mp;
    queue<pair<BinaryTreeNode<int> *,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto x=q.front();
        q.pop();
        BinaryTreeNode<int> * cur=x.first;
        int key=x.second;
        mp[key]=cur->data;
        if(cur->left)
            q.push({cur->left,key-1});
        if(cur->right)
            q.push({cur->right,key+1});
    }
    for(auto x:mp)
        ans.push_back(x.second);
    return ans;
}
