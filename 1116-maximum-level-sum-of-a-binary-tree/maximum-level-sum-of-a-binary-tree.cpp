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
    int maxLevelSum(TreeNode* root) {

        if(!root) return 0;

        int ans = 1;
        int c = 0;
        int m = root->val;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            int a = 0;
            c++;
            for(int i = 0; i < s; i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                a += t->val;
            }
            if(a>m) ans = c;
            m = max(m, a);
        }

        return ans;
    }
};