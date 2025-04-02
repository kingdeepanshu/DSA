class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i = 1;
        int ans = 0;
        while(i < nums.size()){
            if(nums[i] > nums[i-1]) i++;
            else{
                ans++;
                nums[i]++;
            }
        }
        return ans;
    }
};