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
    int ans=INT_MIN;
    int calc(TreeNode* root){
        if(!root) return 0;
        int l=max(0,calc(root->left));
        int r=max(0,calc(root->right));
        ans=max(ans,l+r+root->val);
        return max(l,r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int t=calc(root);
        // if(t>ans) return t;
        return ans;
    }
};
