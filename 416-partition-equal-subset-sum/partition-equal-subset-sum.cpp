class Solution {
public:
    bool solve(vector<int> &nums, int i, int t, int s, vector<vector<int>> &dp){
        if(s == t) return true;
        if(i >= nums.size()) return false;
        if(dp[i][s] != -1) return dp[i][s];
        bool take = solve(nums, i+1, t, s+nums[i], dp);
        bool nontake = solve(nums, i+1, t, s, dp);
        return dp[i][s] = take || nontake;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto i: nums) sum += i;
        if(sum%2 != 0) return false;

        vector<vector<int>> dp(nums.size()+1, vector<int> (sum+1, -1));
        return solve(nums, 0, sum/2, 0, dp);
    }
};