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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};

        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;

        while(!q.empty()){
            int n;
            int s = q.size();
            for(int i = 0; i < s; i++){
                TreeNode* tn = q.front();

                if(i == s-1) n = tn->val;
                q.pop();

                if(tn->left) q.push(tn->left);
                if(tn->right) q.push(tn->right);
            }
            ans.push_back(n);
        }

        return ans;
    }
};