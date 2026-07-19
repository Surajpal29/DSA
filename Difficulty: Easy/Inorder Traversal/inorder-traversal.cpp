/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void helper(Node* root,vector<int>&res){
        if(root==nullptr) return;
        
        if(root->left) helper(root->left,res);
        res.push_back(root->data);
        if(root->right) helper(root->right,res);
    }
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>res;
        helper(root,res);
        return res;
    }
};