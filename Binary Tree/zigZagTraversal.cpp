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
#include<bits/stdc++.h>
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
     vector<int> ans;
        if(!root)
            return ans;
        bool flag=true;
        queue<BinaryTreeNode<int>*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> t;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                BinaryTreeNode<int>* cur=q.front();
                q.pop();
                t.push_back(cur->data);
                if(cur->left)
                    q.push(cur->left);
                if(cur->right)
                    q.push(cur->right);
            }
            if(flag)
            {
                for(auto i:t)
                    ans.push_back(i);
            }
            else
            {
                reverse(t.begin(),t.end());
                for(auto i:t)
                    ans.push_back(i);
            }
            flag=!flag;
        }
        return ans;
}
