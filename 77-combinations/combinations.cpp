class Solution {
public:
    void solve(vector<vector<int>> &ans, int idx, int n, int k, vector<int> a){
        if(k == 0){
            ans.push_back(a);
            return;
        }

        for(int i = idx; i <= n; i++){
            a.push_back(i);
            solve(ans, i+1, n, k-1, a);
            a.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        solve(ans, 1, n, k, {});

        return ans;
    }
};