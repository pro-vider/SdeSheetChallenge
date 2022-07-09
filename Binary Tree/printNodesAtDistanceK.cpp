/*************************************************************

    Following is the Binary Tree node structure for reference:

    class BinaryTreeNode{
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
void parenting(BinaryTreeNode<int>* root,unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*>& parent_map)
    {
        queue<BinaryTreeNode<int>*>q;
        q.push(root);
        while(!q.empty())
        {
            
                BinaryTreeNode<int>* cur=q.front();
                q.pop();
                if(cur->left)
                {
                    parent_map[cur->left]=cur;
                    q.push(cur->left);
                }
                if(cur->right)
                {
                    parent_map[cur->right]=cur;
                    q.push(cur->right);
                }
            
        }
    }

vector<BinaryTreeNode<int>*> printNodesAtDistanceK(BinaryTreeNode<int>* root, BinaryTreeNode<int>* target, int K) {
    // Write your code here.
     unordered_map<BinaryTreeNode<int>*,BinaryTreeNode<int>*> parent_map;
        parenting(root,parent_map);
        
        unordered_map<BinaryTreeNode<int>*,bool> vis;
        queue<BinaryTreeNode<int>*> q;
        q.push(target);
        vis[target]=true;
        int cur_lvl=0;
        while(!q.empty())
        {
            //cur_lvl++;
            if(cur_lvl==K)
                break;
            cur_lvl++;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                BinaryTreeNode<int>* cur=q.front();
                q.pop();
                if(cur->left and !vis[cur->left])
                {
                    q.push(cur->left);
                    vis[cur->left]=true;
                }
                if(cur->right and !vis[cur->right])
                {
                    q.push(cur->right);
                    vis[cur->right]=true;
                }
                if(parent_map[cur] and !vis[parent_map[cur]])
                {
                    q.push(parent_map[cur]);
                    vis[parent_map[cur]]=true;
                }
            }
        }
        vector<BinaryTreeNode<int>*> ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
}
