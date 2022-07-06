//Link-https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1#

// Input :
//             8
//          /     \
//         3      10
//       /   \      \
//      1     6     14
//          /   \   /
//         4     7 13
// Output : 8 10 14 3 6 7 13 1 4
// Diagonal Traversal of binary tree : 
//  8 10 14 3 6 7 13 1 4


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


vector<int> diagonal(Node *root)
{
   // your code here
   
   queue<Node*> q;
   Node* cur = root;
   vector<int> ans;
   while(!(q.empty() && cur == NULL)){
       // reached rightmost node -> pick from queue
       if(cur == NULL) {
           cur = q.front();
           q.pop();
       }
       if(cur->left != NULL) q.push(cur->left);
       
       ans.push_back(cur->data);
       // move right
       cur = cur->right;
   }
   
   return ans;
  
}
