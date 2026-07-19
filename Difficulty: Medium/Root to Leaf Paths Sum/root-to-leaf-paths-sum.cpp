/* Structure of a Tree Node
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
}; */
class Solution {
  public:
    void helper(Node* root, int sum,int& ans){
        
        sum=sum*10+root->data;
        
        if(root->left==nullptr && root->right==nullptr){
            ans+=sum;
            return;
        }
        
        if(root->left) helper(root->left,sum,ans);
        if(root->right) helper(root->right,sum,ans);
        
        sum=sum-root->data;
        sum=sum/10;
    }
    int treePathsSum(Node *root) {
        // code here
        int ans=0;
        int sum=0;
        if(root==nullptr) return ans;
        helper(root,sum,ans);
        return ans;
    }
};