class Solution {
public:
    int triangularSum(vector<int>& nums) {

        if(nums.size() == 1) return nums[0];

        vector<int> a = nums;
        while(a.size() > 1){
            vector<int> b;
            for(int i = 1; i < a.size(); i++){
                int m = a[i]+a[i-1];
                m = (m > 9)?m-10: m;
                b.push_back(m);
            }
            a = b;
        }

        return a[0];
    }
};