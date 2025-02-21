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
private:
    int solve(TreeNode* root, vector<int> &ans){
        if(!root) return 0;
        int l = solve(root->left, ans);
        int r = solve(root->right, ans);
        ans.push_back(abs(r-l));
        return max(r, l)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        for(auto i: ans){
            if(i >= 2) return false;
        }
        return true;
    }
};