class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {
        if(target < nums[0]) return 0;
        if(target > nums[nums.size()-1]) return nums.size();
        int t = 0;
        int s = 0;
        int e = nums.size() -1;
        int mid = s + (e-s)/2;
        while(e >= s){
            mid = s + (e-s)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target)
                e = mid-1;
            else
                s = mid+1;
        }
        return s;
    }
};