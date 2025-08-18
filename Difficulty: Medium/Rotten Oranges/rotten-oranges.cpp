class Solution {
  public:
    int orangesRotting(vector<vector<int>>& mat) {
        // Code here
        int fresh = 0;
        int min = -1;
        
        int m = mat.size();
        int n = mat[0].size();
        
        queue<pair<int, int>> q;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 2) q.push({i, j});
                if(mat[i][j] == 1) fresh++; 
            }
        }
        
        if(fresh == 0) return 0;
        
        int dr[4] = {0, 0, -1, 1};
        int dc[4] = {-1, 1, 0, 0};
        
        while(!q.empty()){
            int s = q.size();
            min++;
        
            for(int i = 0; i < s; i++){
                auto [x, y] = q.front();
                q.pop();
                
                for(int k = 0; k < 4; k++){
                    int nx = x+dr[k];
                    int ny = y+dc[k];
                    if(nx >= 0 && nx < m && ny >= 0 && ny < n && mat[nx][ny] == 1){
                        q.push({nx, ny});
                        mat[nx][ny] = 2;
                        fresh--;
                    }
                }
            }
        }
        
        if(fresh > 0) return -1;
        return min;
    }
};