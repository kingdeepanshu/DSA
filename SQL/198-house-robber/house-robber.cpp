class Solution {
public:
    int solve(vector<int> a, int i, int sum){
        if(i >= a.size()){
            return sum;
        }
        return max(solve(a, i+1, sum), solve(a, i+2, sum+a[i]));
    }

    int solvedp(vector<int> a, vector<int> &dp, int i){

        if(i >= a.size()) return 0;

        if(dp[i] != -1) return dp[i];

        return dp[i] = max(a[i]+solvedp(a, dp, i+2), solvedp(a, dp, i+1));

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);

        return solvedp(nums, dp, 0);
    }
};