/* Binary Tree Node Structure
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
    int absDiff(Node *root) {
        // code here
        int ans=INT_MAX;
        int prev=INT_MAX;
        
        dfs(root,prev,ans);
        return ans;
    }
    void dfs(Node* root,int &prev,int &ans){
        if(root==nullptr) return;
        
        dfs(root->left,prev,ans);
        ans=min(ans,abs(root->data-prev));
        prev=root->data;
        dfs(root->right,prev,ans);
    }
};