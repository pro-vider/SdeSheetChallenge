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
#include<bits/stdc++.h>
string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
    if(!root)
        return "";
    string s;
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
         TreeNode<int>* cur=q.front();
            q.pop();
            if(cur==NULL)
                s.append("#,");
            else
                s.append(to_string(cur->data)+",");
            if(cur!=NULL)
            { 
                q.push(cur->left);
                q.push(cur->right);
            }   
            
    }
    
    return s;

}

TreeNode<int>* deserializeTree(string &s)
{
 //    Write your code here for deserializing the tree
    if(s.size()==0)
        return NULL;
    stringstream str(s);
    string x;
    getline(str,x,',');
    TreeNode<int>* root=new TreeNode<int>(stoi(x));
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int>* cur=q.front();
        q.pop();
        getline(str,x,',');
        if(x=="#")
            cur->left=NULL;
        else
        {
            TreeNode<int>* leftnode=new TreeNode<int>(stoi(x));
            cur->left=leftnode;
            q.push(leftnode);
        }
        getline(str,x,',');
        if(x=="#")
            cur->right=NULL;
        else
        {
            TreeNode<int>* rightnode=new TreeNode<int>(stoi(x));
            cur->right=rightnode;
            q.push(rightnode);
        }
    }
    return root;

}



