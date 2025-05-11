class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s = 0;
        for(int i = 0; i < k; i++){
            s += nums[i];
        }
        int m = s;
        for(int i = k; i < nums.size(); i++){
            s += nums[i] - nums[i - k];
            m = max(s, m);
        }
        return (double)m/k;
    }
};