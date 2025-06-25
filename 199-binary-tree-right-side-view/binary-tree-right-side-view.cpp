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
        vector<int > ans;
        if(!root) return ans;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            int s = q.size();
            int a = 0;
            for(int i = 0; i < s; i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                a = t->val;
            }
            ans.push_back(a);
        }

        return ans;
    }
};