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
class BSTiterator
{
      stack<TreeNode<int>*> st;
    public:
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
      
        Allpush(root);
    }

    int next()
    {
        
           TreeNode<int>* cur=st.top();
            st.pop();
            Allpush(cur->right);
            return cur->data;
            
         }

    bool hasNext()
    {
        // write your code here
        return !st.empty();
    }
    private:
    void Allpush(TreeNode<int>* root)
    {
        while(root)
        {
            st.push(root);
            root=root->left;
        }
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/
