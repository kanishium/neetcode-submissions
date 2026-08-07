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
    bool calc(TreeNode* p, TreeNode* q){
        if(!p && !q){
            return true;
        }
        if(!p){
            return false;
        }
        if(!q){
            return false;
        }
        cout << p->val << " " << q->val  << endl;
        if(p->val==q->val){
            bool l=calc(p->left,q->left);
            bool r=calc(p->right,q->right);
            return l && r ;
        }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode* p1=p;
        TreeNode* q1=q;
        return calc(p1,q1);
    }
};
