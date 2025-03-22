//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // Your Code goes here.
        int n = max(greed.size(), cookie.size());
        int ans = 0;
        sort(greed.begin(), greed.end());
        sort(cookie.begin(), cookie.end());
        int i = 0;
        int j = 0;
        while(j < cookie.size() && i < greed.size()){
            if(cookie[j] >= greed[i]){
                ans++;
                i++;
                j++;
            }else if(cookie[j] < greed[i]) j++;
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> greed;
        int num;
        while (ss >> num)
            greed.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> cookie;
        ss.str(input);
        while (ss >> num)
            cookie.push_back(num);

        Solution obj;
        cout << obj.maxChildren(greed, cookie) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends