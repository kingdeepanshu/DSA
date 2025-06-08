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
    int maxlen = 0;
    void solve(TreeNode* root, bool l, int n){
        if(root == nullptr) return;

        maxlen = max(maxlen, n);

        if(l){
            solve(root->right, false, n+1);
            solve(root->left, true, 1);
        }else{
            solve(root->left, true, n+1);
            solve(root->right, false, 1);
        }
    }

    int longestZigZag(TreeNode* root) {
        solve(root, true, 0);
        return maxlen;
    }
};