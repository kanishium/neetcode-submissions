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
    bool calc(TreeNode* root, TreeNode* subRoot){
        if(!root && !subRoot) return true;
        if(!root || !subRoot) return false;
        if(root->val!=subRoot->val) return false;
        return calc(root->left,subRoot->left) && calc(root->right,subRoot->right); 
    }
    bool trav(TreeNode* root, TreeNode* subRoot){
        if(!root){
            return false;
        }
        if(root->val==subRoot->val){
            if(calc(root,subRoot)){
                return true;
            }
        }
        return trav(root->left,subRoot) || trav(root->right,subRoot);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return trav(root,subRoot);
    }
};
