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
    void solve(TreeNode* root, int &ans, int m){
        if(root == nullptr) return;
        if(root->val >= m) ans++;
        m = max(m, root->val);
        solve(root->left, ans, m);
        solve(root->right, ans, m);
    }
    int goodNodes(TreeNode* root) {
        int m = root->val;
        int ans = 0;
        solve(root, ans, m);
        return ans;
    }
};