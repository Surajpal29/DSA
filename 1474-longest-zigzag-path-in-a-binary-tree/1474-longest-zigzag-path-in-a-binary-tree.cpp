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
    int ans = -1;
    // 0 is left, 1 is right
    void _getLongestPath(TreeNode* curr, int direction, int length) {
        if(!curr) return;
        if(direction == 0) {
            _getLongestPath(curr->right, 1, length+1);
            _getLongestPath(curr->left, 0, 1);
        }
        else {
            _getLongestPath(curr->left, 0, length+1);
            _getLongestPath(curr->right, 1, 1);
        }
        ans = max(ans, length);
    }


    int longestZigZag(TreeNode* root) {
        unordered_map<TreeNode*, int> dp;
        _getLongestPath(root, 0, 0);
        _getLongestPath(root, 1, 0);
        return ans;
    }
};