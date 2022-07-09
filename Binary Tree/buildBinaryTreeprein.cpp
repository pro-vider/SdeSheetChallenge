//Construct Binary Tree from Preorder and Inorder Traversal


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
TreeNode<int>* building(vector<int>& preorder,int prestart,int preend,vector<int>& inorder,int instart,int inend,map<int,int>& mp)
    {
        if(prestart>preend or instart>inend)
            return NULL;
        TreeNode<int>* root=new  TreeNode<int>(preorder[prestart]);
        int x=mp[preorder[prestart]];
        int nodeleft=x-instart;
        root->left=building(preorder,prestart+1,prestart+nodeleft,inorder,instart,x-1,mp);
        root->right=building(preorder,prestart+nodeleft+1,preend,inorder,x+1,inend,mp);
        return root;
    }

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
             mp[inorder[i]]=i;
          
        TreeNode<int>* root=building(preorder,0,preorder.size()-1,inorder,0,inorder.size(),mp);
        return root;
}
