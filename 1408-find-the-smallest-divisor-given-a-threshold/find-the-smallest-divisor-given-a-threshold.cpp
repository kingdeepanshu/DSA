class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());
        int ans = e;
        while(e >= s){
            int mid = s + (e-s)/2;
            int sum = 0;
            for(auto i: nums){
                sum += (i + mid - 1)/mid;
            }
            // if(sum == threshold) return mid;
            if(sum <= threshold){
                ans = mid;//4
                e = mid-1;
            }else{
                s = mid+1;
            }
        }
        return ans;
    }
};