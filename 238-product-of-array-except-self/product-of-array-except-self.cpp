class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1;
        int z = 0;
        for(int i: nums){
            if(i == 0) z++;
            else p *= i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(z == 1){
                if(nums[i] == 0) nums[i] = p;
                else nums[i] = 0;
            }else if(z > 1){
                nums[i] = 0;
            }else{
                nums[i] = p/nums[i];
            }
        }

        return nums;
    }
};