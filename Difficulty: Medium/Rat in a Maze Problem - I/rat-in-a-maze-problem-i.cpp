class Solution {
  public:
    void solve(vector<vector<int>>& maze, int i, int j, int n, set<string> &s, string dir, vector<vector<bool>> &vis){
        
        if(vis[i][j]) return;
        
        vis[i][j] = true;
        
        if(i == n-1 && j == n-1) {
            s.insert(dir);
        }
        
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        char ddir[4] = {'U', 'D', 'L', 'R'};
        
        for(int k = 0; k < 4; k++){
            int nx = i+dr[k];
            int ny = j+dc[k];
            string ndir = dir+ddir[k];
            
            if(nx >= 0 && nx < n && ny >= 0 && ny < n && (!vis[nx][ny]) && maze[nx][ny] == 1){
                solve(maze, nx, ny, n, s, ndir, vis);
            }
        }
        vis[i][j] = false;
        return;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();
        // code here
        set<string> s;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        solve(maze, 0, 0, maze.size(), s, "", vis);
        vector<string> ans;
        for(auto i: s) ans.push_back(i);
        return ans;
    }
};