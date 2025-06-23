class Solution {
public:
    int mm(vector<vector<int>>& grid, int r, int c){
        int m = INT_MIN;
        for(int i = r; i < r+3; i++){
            for(int j = c; j < c+3; j++){
                m = max(m, grid[i][j]);
            }
        }
        return m;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2));

        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[0].size(); j++){
                ans[i][j] = mm(grid, i, j);
            }
        }
        return ans;
    }
};