class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        long long ans = 0;
        bool ij = true;
        
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = arr.size()-1;
        
        while(true){
            if(i == j){
                i = 0;
                ans += arr[j]-arr[i];
                break;
            }
            ans += arr[j]-arr[i];
            
            if(ij) i++;
            else j--;
            ij = !ij;
        }
        return ans;
    }
};
