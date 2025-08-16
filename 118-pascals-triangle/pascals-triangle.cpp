class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        ans.push_back({1});
        if(numRows == 1) return ans;
        ans.push_back({1, 1});
        if(numRows == 2) return ans;

        for(int k = 1; k < numRows-1; k++){
            vector<int> row;
            row.push_back(1);
            for(int i = 0; i < ans[k].size()-1; i++){
                row.push_back(ans[k][i]+ans[k][i+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }

        return ans;
    }
};