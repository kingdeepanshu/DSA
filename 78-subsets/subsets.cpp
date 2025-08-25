class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int> b, int n, vector<vector<int>> &ans){
        if(i == n) {
            ans.push_back(b);
            return;
        }

        b.push_back(nums[i]);
        solve(nums, i+1, b, n, ans);

        b.pop_back();
        solve(nums, i+1, b, n, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> b;
        int n = nums.size();
        solve(nums, 0, b, n, ans);

        return ans;
    }
};