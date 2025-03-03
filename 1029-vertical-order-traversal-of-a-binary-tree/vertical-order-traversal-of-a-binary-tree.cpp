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
    // void solve(TreeNode* root, map<int, vector<int>> &mp, int n){
    //     if(!root) return;
    //     solve(root->left, mp, n-1);
    //     solve(root->right, mp, n+1);
    //     mp[n].push_back(root->val);
    // }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // map<int, vector<int>> mp;
        // solve(root, mp, 0);
        // vector<vector<int>> ans;
        // for(auto i: mp){
        //     sort(i.second.begin(), i.second.end());
        //     ans.push_back(i.second);
        // }
        // return ans;

        map<int, vector<int>> mp;
        vector<vector<int>> ans;
        queue<pair<TreeNode*, int>> q;
        int n = 0;
        q.push(make_pair(root, n));
        while(!q.empty()){
            int s = q.size();
            map<int, vector<int>> a;
            for(int i = 0; i < s; i++){
                auto t = q.front();
                q.pop();
                a[t.second].push_back(t.first->val);
                if(t.first->left) q.push(make_pair(t.first->left, t.second-1));
                if(t.first->right) q.push(make_pair(t.first->right, t.second+1));
            }
            for(auto i: a){
                sort(i.second.begin(), i.second.end());
                for(auto j: i.second){
                    mp[i.first].push_back(j);
                }
            }
        }
        for(auto i: mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};