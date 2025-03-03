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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        bool f = false;
        stack<int> st;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int s = q.size();
            for(int i = 0; i < s; i++){
                TreeNode* t = q.front();
                q.pop();
                if(f){
                    st.push(t->val);
                }else{
                    level.push_back(t->val);
                }
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            while(!st.empty()){
                level.push_back(st.top());
                st.pop();
            }
            ans.push_back(level);
            f = !f;
        }
        return ans;
    }
};