// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        int ans = arr[0] * (arr.size()-1);
        return ans;
    }
};