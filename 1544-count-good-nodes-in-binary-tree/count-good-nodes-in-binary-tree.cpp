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
        if(!root) return;
        // int a;
        if(root->val >= m){
            // a = m;
            m = root->val;
            ans++;
        }
        solve(root->left, ans, m);
        // m = a;
        solve(root->right, ans, m);
    }
    int goodNodes(TreeNode* root) {
        int ans = 0;
        int m = root->val;
        solve(root, ans, m);
        return ans;
    }
};