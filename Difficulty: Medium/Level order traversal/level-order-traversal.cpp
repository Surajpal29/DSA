 /* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
   
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int>res;
        if(root==nullptr) return res;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            
            res.push_back(curr->data);
            
            if(curr->left!=nullptr) q.push(curr->left);
            
            if(curr->right!=nullptr) q.push(curr->right);
        }
        return res;
    }
};