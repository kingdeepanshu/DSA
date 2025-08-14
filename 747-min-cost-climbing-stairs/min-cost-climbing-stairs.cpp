class Solution {
public:
    int solve(vector<int> &cost, vector<int>& dp, int n, int i){
        if(i >= n) return 0;

        if(dp[i] != -1) return dp[i];

        return dp[i] = cost[i] + min(solve(cost, dp, n, i+1), solve(cost, dp, n, i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(solve(cost, dp, n, 1), solve(cost, dp, n, 0));
    }
};