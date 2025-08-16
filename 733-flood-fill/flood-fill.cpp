class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ic = image[sr][sc];

        if(ic == color) return image;
        queue<pair<int, int>> q;

        int m = image.size();
        int n = image[0].size();

        image[sr][sc] = color;
        q.push({sr, sc});

        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while(!q.empty()){
            int s = q.size();

            for(int i = 0; i < s; i++){
                auto [x, y] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++){
                    int nx = x+dr[k];
                    int ny = y+dc[k];

                    if(nx >= 0 && nx < m && ny >= 0 && ny < n && image[nx][ny] == ic){
                        image[nx][ny] = color;
                        q.push({nx, ny});
                    }
                }
            }
        }

        return image;
    }
};