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
    void leaf(TreeNode* root, vector<int> &ans){
        if(root == nullptr) return;
        if(root->left == nullptr && root->right == nullptr){
            ans.push_back(root->val);
        }
        leaf(root->left, ans);
        leaf(root->right, ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> o;
        vector<int> t;
        leaf(root1, o);
        leaf(root2, t);

        return o == t;
    }
};