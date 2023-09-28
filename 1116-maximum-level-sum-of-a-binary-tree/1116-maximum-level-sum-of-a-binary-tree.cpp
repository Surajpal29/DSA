/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int maxLevelSum(TreeNode* root) {
        int maxLevel = 0;
        int maxLevelS = INT_MIN;
        
        queue<TreeNode*> q;
        queue<TreeNode*> nextLevel;
        
        q.push(root);
        int level = 1;
        
        while (!q.empty()) {
            
            int sum = 0;
            int size = q.size();
            for (int i = 0; !q.empty() && i < size; i++) {
                auto* curr = q.front();
                sum += curr->val;
                q.pop();
                if (curr->left)
                    nextLevel.push(curr->left);
            
                if (curr->right)
                    nextLevel.push(curr->right);
            }
            
            if (q.empty()) {
                swap(q, nextLevel);
                if (sum > maxLevelS) {
                    maxLevelS= sum;
                    maxLevel = level;
                }
            }
            
            level++;
        }
        
        return maxLevel;
    }
};