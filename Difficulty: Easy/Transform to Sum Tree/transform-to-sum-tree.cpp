/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    int solve(Node* root){
        if(root==nullptr) return 0;
         
         int leftsum=solve(root->left);
         int rightsum=solve(root->right);
         
         int oldval=root->data;
         
         root->data=leftsum+rightsum;
         
         return oldval+root->data;
        
    }
    void toSumTree(Node *root) {
        // code here
        solve(root);
    }
};