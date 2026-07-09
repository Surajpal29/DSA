/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void helper(Node* root,vector<int>&curr,vector<vector<int>>&res){
        
        if(root==nullptr) return;
        
        curr.push_back(root->data);
        
        if(root->left==nullptr && root->right==nullptr) {
            res.push_back(curr);
        }
        else{
        if(root->left) helper(root->left,curr,res);
        if(root->right) helper(root->right,curr,res);
        }
        
        curr.pop_back();
        
    }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<vector<int>>res;
        vector<int>curr;
        helper(root,curr,res);
        return res;
    }
};