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
    void c(TreeNode* root, int &count){
        if(!root) return;
        c(root->left, count);
        c(root->right, count);
        count++;
    }
    int countNodes(TreeNode* root) {
        int ans = 0;
        c(root, ans);
        return ans;
    }
};