class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int m = nums[0];
        int c = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                m = max(m,c);
                c = nums[i];
            }else{
                c += nums[i];
                m = max(m,c);
            }
        }
        return m;
    }
};