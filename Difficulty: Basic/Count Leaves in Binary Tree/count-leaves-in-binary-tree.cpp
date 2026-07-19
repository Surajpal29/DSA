/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    void helper(Node* root,int& ans){
        if(root==nullptr) return;
        
        if(root->left==nullptr && root->right==nullptr) ans++;
        
        if(root->left) helper(root->left,ans);
        if(root->right) helper(root->right,ans);
    }
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int ans=0;
        helper(root,ans);
        return ans;
    }
};