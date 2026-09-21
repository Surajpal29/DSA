/* Definition of Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    void solve(Node* root,vector<int>&res){
        if(root==nullptr) return;
        
        if(root->left && !root->right){
            res.push_back(root->left->data);
        }
        
        if(root->right && ! root->left){
            res.push_back(root->right->data);
        }
        
        solve(root->left,res);
        solve(root->right,res);
    }
    vector<int> noSibling(Node* root) {
        // code here
        vector<int>res;
       
        solve(root,res);
        
        if(res.empty()) return {-1};
        
        sort(res.begin(),res.end());
        return res;
        
    }
};