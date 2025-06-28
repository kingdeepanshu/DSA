class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 0;

        while(j < nums.size()){
            if(nums[j] != 0){
                if(nums[i] == 0){
                    int t = nums[i];
                    nums[i] = nums[j];
                    nums[j] = t;
                    i++;
                    j++;
                }else{
                    i++;
                    j++;
                }
            }else{
                j++;
            }
        }

        // return nums;
    }
};