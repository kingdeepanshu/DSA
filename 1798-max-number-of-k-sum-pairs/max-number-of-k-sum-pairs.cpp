class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int i = 0;
        int j = nums.size()-1;
        int ans = 0;
        sort(nums.begin(), nums.end());
        while(i < j){
            int s = nums[i]+nums[j];

            if(s == k){
                ans++;
                i++;
                j--;
            }
            if(s > k){
                if(nums[i]>nums[j]) i++;
                else j--;
            }
            if(s < k){
                if(nums[i]>nums[j]) j--;
                else i++;
            }
        }
        return ans;
    }
};