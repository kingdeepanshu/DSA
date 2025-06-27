/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solve(TreeNode* &curr, TreeNode* &cl, TreeNode* &ans, TreeNode* target){
        if(curr == nullptr) return;
        if(curr == target) ans = cl;
        solve(curr->left, cl->left, ans, target);
        solve(curr->right, cl->right, ans, target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* curr = original;
        TreeNode* cl = cloned;
        TreeNode* ans;
        solve(curr, cl, ans, target);
        return ans;
    }
};