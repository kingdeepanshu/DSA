class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // Your Code goes here.
        sort(greed.begin(), greed.end());
        sort(cookie.begin(), cookie.end());
        
        int ans = 0;
        int i = 0;
        int j = 0;
        
        while(i < greed.size() && j < cookie.size()){
            if(cookie[j] >= greed[i]){
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};