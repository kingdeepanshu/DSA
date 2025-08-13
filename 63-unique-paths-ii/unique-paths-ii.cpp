class Solution {
public:
    int solve(int m, int n, vector<vector<int>> obstacleGrid, vector<vector<int>>& dp){

        if(m < 0 || n < 0) return 0;

        if(obstacleGrid[m][n] == 1) return 0;

        if(m == 0 && n == 0) return 1;

        if(dp[m][n] != -1) return dp[m][n];

        return dp[m][n] = solve(m-1, n, obstacleGrid, dp) + solve(m, n-1, obstacleGrid, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size()-1;
        int n = obstacleGrid[0].size()-1;

        vector<vector<int>> dp(m+2, (vector<int>(n+2, -1)));
        return solve(m, n, obstacleGrid, dp);
    }
};