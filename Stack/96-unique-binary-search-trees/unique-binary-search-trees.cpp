class Solution {
private:
    int solve(int n, vector<int> &dp){
        if(n == 0 || n == 1) return 1;
        if(dp[n] != -1) return dp[n];
        int ans=0;
        for(int i = 1; i <= n; i++){
            int r = n-i;
            int l = i-1;
            int right = solve(r, dp);
            int left = solve(l, dp);
            ans+=(right*left);
        }
        return dp[n]=ans;
    }
public:
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        dp[0] = 1;
        dp[1] = 1;
        if(n == 1 || n == 0) return dp[0];
        return solve(n, dp);
    }
};