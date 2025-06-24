class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = INT_MIN;
        for(auto i: candies) m = max(m, i);

        vector<bool> ans;
        for(auto i: candies) ans.push_back(i+extraCandies >= m? true: false);

        return ans;
    }
};