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
    int bfs(TreeNode* root) {
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while (!q.empty()) {
            TreeNode* node = q.front().first;
            int dis = q.front().second;
            q.pop();
            ans = max(ans, dis);
            if (node->left != NULL) {
                q.push({node->left, dis + 1});
            }
            if (node->right != NULL) {
                q.push({node->right, dis + 1});
            }
        }

        return ans;
    }
    int maxDepth(TreeNode* root) { 
        if(!root) return 0;
        if(!root->left && !root->right) return 1;
        return bfs(root); }
};
