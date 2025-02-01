class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cj = 0;
        int i = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > cj) return false;
            cj = max(cj, nums[i]+i);
        }
        return true;
    }
};