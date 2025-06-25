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
    void solve(TreeNode* root, vector<int> &r){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            r.push_back(root->val);
            return;
        }
        solve(root->left, r);
        solve(root->right, r);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;

        solve(root1, r1);
        solve(root2, r2);
        
        return (r1 == r2);
    }
};