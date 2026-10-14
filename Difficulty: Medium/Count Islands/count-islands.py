class Solution:
    def countIslands(self, grid):
        # code here
        m = len(grid)
        n = len(grid[0])
        land = []
        ans = 0
        q = []
        
        def bfs(a, b):
            nonlocal ans, m, n, q
            if grid[a][b] == 'W':
                return
            
            dir = [[1, 0], [1, -1], [0, 1], [0, -1], [-1, 0], [-1, 1], [-1, -1], [1, 1]]
            
            grid[a][b] = 'W'
            q.append([a, b])
            
            while q:
                f = q.pop(0)
                r = f[0]
                c = f[1]
                
                for [x, y] in dir:
                    nr = r+x
                    nc = c+y
                    
                    if 0 <= nr < m and 0 <= nc < n and grid[nr][nc] != 'W':
                        grid[nr][nc] = 'W'
                        q.append([nr, nc])
            
        
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 'L': land.append([i, j])
                
        for i in land:
            a = i[0]
            b = i[1]
            if grid[a][b] != 'W':
                ans += 1
                bfs(a, b)
            
        return ans