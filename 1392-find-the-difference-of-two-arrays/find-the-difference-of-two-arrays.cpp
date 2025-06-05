class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;

        vector<vector<int>> ans(2);

        for(int i: nums1){
            s.insert(i);
        }

        for(int i: nums2){
            if(s.find(i) != s.end()){
                s.erase(i);
            }
        }

        for(int i:s) ans[0].push_back(i);

        s.clear();

        for(int i: nums2){
            s.insert(i);
        }

        for(int i: nums1){
            if(s.find(i) != s.end()){
                s.erase(i);
            }
        }

        for(int i:s) ans[1].push_back(i);

        return ans;
    }
};