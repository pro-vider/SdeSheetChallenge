//The maximum width of a binary tree is the maximum of all the level widths. Width for a level is defined as the maximum number of nodes between 
//the leftmost and rightmost node of the level(including the end nodes and the null nodes between the end nodes). 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int ans=0,first,last;
      
     if(!root)
         return 0;
     queue<pair<TreeNode*,int>> q;
        q.push({root,0});
     while(!q.empty())
     {
         int size=q.size();
         int mini=q.front().second;
         for(int i=0;i<size;i++)
         {
             long curid=q.front().second-mini;
             TreeNode* temp=q.front().first;
             q.pop();
             if(i==0)
                 first=curid;
             if(i==size-1)
                 last=curid;
             if(temp->left)
                 q.push({temp->left,curid*2+1});
             if(temp->right)
                 q.push({temp->right,curid*2+2});
         }
         ans=max(ans,last-first+1);
     }
        return ans;
    }
};
