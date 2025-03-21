//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution {
  public:
    int sol(int n, vector<int> &dp, vector<int>& cost){
        if(n == 0 || n == 1) return cost[n];
        
        if(dp[n] != -1) return dp[n];
        return dp[n] = cost[n] + min(sol(n-1, dp, cost), sol(n-2, dp, cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n = cost.size();
        vector<int> dp(n, -1);
        
        return min(sol(n-1, dp, cost), sol(n-2, dp, cost));
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends