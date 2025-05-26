class Solution {
  public:
    vector<int> candyStore(int candies[], int N, int K) {
        // Write Your Code here
        sort(candies, candies + N);
        
        int m = N;
        
        int c = 0;
        while(m > 0){
            c++;
            m -= K+1;
        }
        
        vector<int> ans(2, 0);
        
        for(int i = 0; i < c; i++){
            ans[0] += candies[i];
        }
        
        for(int i = N-1; i >= N-c; i--){
            ans[1] += candies[i];
        }
        
        return ans;
    }
};