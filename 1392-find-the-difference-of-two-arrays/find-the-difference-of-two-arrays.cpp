class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> s1;
        for(auto i: nums1){
            s1.insert(i);
        }
        unordered_set<int> s2;
        for(auto i: nums2){
            s2.insert(i);
        }
        vector<int> a;
        for(int i: s1){
            if(s2.find(i) == s2.end()){
                a.push_back(i);
            }
        }
        ans.push_back(a);
        vector<int> b;
        for(int i: s2){
            if(s1.find(i) == s1.end()){
                b.push_back(i);
            }
        }

        ans.push_back(b);

        return ans;
    }
};