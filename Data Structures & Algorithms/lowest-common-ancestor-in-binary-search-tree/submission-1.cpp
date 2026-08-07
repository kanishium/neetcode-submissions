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
    TreeNode* calc(TreeNode* root, TreeNode* p, TreeNode* q){
        if(!root) return NULL;
        if(root==p || root==q){
            return root;
        }
        TreeNode* l=calc(root->left,p,q);
        TreeNode* r=calc(root->right,p,q);
        if(r==NULL) return l;
        else if(l==NULL) return r;
        else return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // if(root==p || root==q) return root;
        return calc(root,p,q);
    }
};
