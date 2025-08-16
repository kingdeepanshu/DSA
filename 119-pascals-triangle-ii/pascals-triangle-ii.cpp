class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;

        ans.push_back({1});
        if(rowIndex == 0) return ans[rowIndex];
        ans.push_back({1, 1});
        if(rowIndex == 1) return ans[rowIndex];

        for(int k = 1; k < rowIndex; k++){
            vector<int> row;
            row.push_back(1);
            for(int i = 0; i < ans[k].size()-1; i++){
                row.push_back(ans[k][i]+ans[k][i+1]);
            }
            row.push_back(1);
            ans.push_back(row);
        }

        return ans[rowIndex];
    }
};