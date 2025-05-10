class Solution {
public:
    int pivot(vector<int> &arr, int n){
        int s = 0;
        int e = n-1;
        int m = s + (e-s)/2;

        while(s<e){
            if(arr[m] >= arr[0]){
                s = m+1;
            }else{
                e = m;
            }
            m = s + (e-s)/2;
        }
        return s;
    }

    int bs(vector<int>& nums, int s, int e, int target){
        // int m = s + (e-s)/2;
        while(e >= s){
            int mid = s + (e-s)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int p = pivot(nums, nums.size());
        // return p;
        if(nums[0] < nums[nums.size()-1]){
            return bs(nums, 0, nums.size()-1, target);
        }
        if(target == nums[p]) return p;//
        if(target >= nums[p] && target <= nums[nums.size()-1]){
            return bs(nums, p, nums.size()-1, target);
        }else{
            return bs(nums, 0, p-1, target);
        }
        return -1;
    }

};