/*  Structure of a Binary Tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
   void solve(Node* root,unordered_map<int,int>&umap,int level){
       if(root==nullptr) return;
       
       umap[level]++;
       solve(root->left,umap,level+1);
       solve(root->right,umap,level+1);
   }
    int maxWidth(Node* root) {
        // code here
        unordered_map<int,int>umap;
        
        solve(root,umap,0);
        
        
        int res=0;
        
        for(auto it:umap){
            res=max(res,it.second);
        }
        return res;
    }
};