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
    void traverse(TreeNode* root){
        if(!root) return;
        if(root->left!=NULL && root->right!=NULL){
            TreeNode* temp=root->left;
            root->left=root->right;
            root->right=temp;
            traverse(root->left);
            traverse(root->right);
        }
        if(root->left==NULL){
            cout << root->val;
            root->left=root->right;
            root->right=NULL;
            traverse(root->left);
        }
        else if(root->right==NULL){
            root->right=root->left;
            root->left=NULL;
            traverse(root->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        traverse(root);
        return root;
    }
};
