class Solution {
public:
    int solve(int m, int n, vector<vector<int>> &dp, vector<vector<int>>& grid){
        if(m == 0 && n == 0) return grid[m][n];

        if(m < 0 || n < 0) return INT_MAX;

        if(dp[m][n] != -1) return dp[m][n];

        return dp[m][n] = grid[m][n]+min(solve(m-1, n, dp, grid), solve(m, n-1, dp, grid));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size()-1;
        int n = grid[0].size()-1;

        // int ans = INT_MAX;
        vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        return solve(m, n, dp, grid);
    }
};