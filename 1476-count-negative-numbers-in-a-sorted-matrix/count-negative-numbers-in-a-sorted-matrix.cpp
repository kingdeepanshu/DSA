class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;
        int c = cols - 1;

        for (int r = 0; r < rows; r++) {
            while (c >= 0 && grid[r][c] < 0) {
                c--;
            }
            ans += cols - (c + 1);
        }

        return ans;
    }
};