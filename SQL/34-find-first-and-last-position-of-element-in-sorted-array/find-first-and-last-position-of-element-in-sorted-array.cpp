class Solution {
public:
    int ub(vector<int> nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int up = -1;

        while(s<=e){
            mid = s + (e-s)/2;
            int a = nums[mid];
            if(a == target){
                up = mid;
                e = mid-1;
            }else if(a > target) e = mid-1;
            else s = mid+1;
        }
        return up;
    }

     int db(vector<int> nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int up = -1;

        while(s<=e){
            mid = s + (e-s)/2;
            int a = nums[mid];
            if(a == target){
                up = mid;
                s = mid+1;
            }else if(a > target) e = mid-1;
            else s = mid+1;
        }
        return up;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(ub(nums, target));
        ans.push_back(db(nums, target));
        return ans;
    }
};