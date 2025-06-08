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
        int ans = 1;
        int maxsum = INT_MIN;
        if(!root->right && !root->left) return ans;

        queue<TreeNode*> q;
        q.push(root);
        int l = 1;

        while(!q.empty()){
            int s = q.size();
            int sum = 0;

            for(int i = 0; i < s; i++){
                TreeNode* tn = q.front();
                q.pop();

                sum += tn->val;

                if(tn->left) q.push(tn->left);
                if(tn->right) q.push(tn->right);
            }
            if(maxsum < sum) {
                ans = l;
                maxsum = sum;
            }
            
            l++;
        }

        return ans;
    }
};