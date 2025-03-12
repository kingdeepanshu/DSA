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
    void preorder(TreeNode* root, vector<TreeNode*> &pre){
        if(!root) return;
        pre.push_back(root);
        preorder(root->left, pre);
        preorder(root->right, pre);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> pre;
        preorder(root, pre);
        if(pre.size() == 0 || pre.size() == 1) return;
        TreeNode* ans = pre[0];
        TreeNode* curr = ans;
        for(auto i: pre){
            curr->right = i;
            curr->left = nullptr;
            curr = i;
        }
        root = ans;
    }
};