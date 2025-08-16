class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // vector<vector<bool>> vis(m, vector<bool>(n, false));

        queue<pair<int, int>> q;
        int min = -1;
        int fresh = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2) q.push({i, j});
                if(grid[i][j] == 1) fresh++;
            }
        }

        if(fresh == 0) return 0;

        int dr[4] = {1, -1, 0, 0};
        int dc[4] = {0, 0, 1, -1};

        while(!q.empty()){
            int sz = q.size();
            min++;

            for(int i = 0; i < sz; i++){
                auto [x, y] = q.front();
                q.pop();
                for(int k = 0; k < 4; k++){
                int nx = x+dr[k];
                int ny = y+dc[k];

                if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == 1){
                    grid[nx][ny] = 2;
                    q.push({nx, ny});
                    fresh--;
                    }
                }
            }
        }

        if(fresh == 0) return min;
        else return -1;

    }
};