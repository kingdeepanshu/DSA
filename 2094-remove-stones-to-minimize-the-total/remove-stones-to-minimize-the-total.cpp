class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        vector<int> fre(10001, 0);
        // int m = piles[0];
        for(auto i: piles){
            fre[i]++;
        }
        for(int i = 10000; i>0 && k > 0; i--){
            while(fre[i] > 0 && k >0){
                fre[i]--;
                fre[(i+1)/2]++;
                k--;
            }
        }
        int sum = 0;
        for(int i = 0; i <= 10000; i++){
            sum += i*fre[i];
        }
        return sum;
    }
};