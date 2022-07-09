/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
#include<bits/stdc++.h>
TreeNode<int>* building(vector<int>& inorder,int instart,int inend,vector<int>& postorder,int poststart,int postend,map<int,int>& mp)
    {
        if(instart>inend or poststart>postend)
            return NULL;
        TreeNode<int>* root=new TreeNode<int>(postorder[postend]);
        int x=mp[root->data];
        int nodesleft=x-instart;
        root->left=building(inorder,instart,x-1,postorder,poststart,poststart+nodesleft-1,mp);
        root->right=building(inorder,x+1,inend,postorder,poststart+nodesleft,postend-1,mp);
        return root;
    }
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postorder, vector<int>& inorder) 
{
	// Write your code here.
    map<int,int> mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        
        TreeNode<int>* root=building(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
        return root;
}
