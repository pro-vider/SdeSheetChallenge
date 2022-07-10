/************************************************************

    Following is the TreeNode class structure

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

TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    if(!root)
        return new TreeNode<int>(val);
    TreeNode<int>* temp=root;
    while(true)
    {
        if(val>temp->val)
        {
            if(temp->right)
                temp=temp->right;
            else
            {
                temp->right=new TreeNode<int>(val);
                break;
            }
            
        }
        else
        {
             if(temp->left)
                temp=temp->left;
            else
            {
                temp->left=new TreeNode<int>(val);
                break;
            }
        }
           
    }
    return root;
    
}
