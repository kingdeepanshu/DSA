class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        //ek to space leke kar le 
        //wrna o(1) me krte hain 
        unordered_map<int, int> c;
        for(int i: nums){
            c[i]++;
        }

        vector<int> ans;
        for(auto i: c){
            if(i.second > n/3) ans.push_back(i.first);

        }

        return ans;

    }
};