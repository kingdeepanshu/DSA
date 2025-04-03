//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool solve(vector<int>& arr, int t, int in, int sum, vector<vector<int>> &dp){
        if(in >= arr.size()){
            if(sum==t){
                return dp[sum][in]=1;
            }
            else{
                return dp[sum][in] = 0;
            }
        }
        
        
        if(dp[sum][in] != -1) return dp[sum][in];
        
        if(sum == t) return dp[sum][in] = 1;
        else if(sum
        > t) return dp[sum][in] = 0;
        else{
            bool take = solve(arr, t, in+1, sum+arr[in], dp);
            bool nontake = solve(arr, t, in+1, sum, dp);
            
            return dp[sum][in] = take||nontake;
        }
        return false;
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        
        int s = 0;
        for(auto i: arr) s+=i;
        int n=arr.size();
        // code here
        vector<vector<int>> dp(s+1, vector<int> (n+1,-1));
        return solve(arr, sum, 0, 0, dp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends