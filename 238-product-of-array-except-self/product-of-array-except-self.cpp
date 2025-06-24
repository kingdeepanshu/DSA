class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m = 1;
        int z = 0;
        for(auto i: nums){
            if(i == 0) z++;
            else m *= i;
        }

        for(int i = 0; i < nums.size(); i++){
            if(z == 1){
                if(nums[i] == 0) nums[i] = m;
                else nums[i] = 0;
            }
            else if(z > 1){
                nums[i] = 0;
            }
            else{
                nums[i] = m/nums[i];
            }

        }
        return nums;
    }
};