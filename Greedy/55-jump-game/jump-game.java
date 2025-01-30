class Solution {
    public boolean canJump(int[] nums) {
        int c = nums[0];
        for(int i = 1; i < nums.length; i++){
            if(c < i){
                return false;
            }
            c = Math.max(c, nums[i]+i);
        }
        return true;
    }
}