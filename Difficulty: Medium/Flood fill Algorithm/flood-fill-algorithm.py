class Solution:
	def floodFill(self, image, sr, sc, newColor):
		# code here
		v = set()
		q = []
		m = len(image)
		n = len(image[0])
		c = image[sr][sc]
		if c == newColor: return image
        def bfs(sr, sc):
            # if (sr, sc) in v:
            nonlocal v, q, m, n, c
            dir = [[0,1], [0,-1], [1, 0], [-1, 0]]
            
            q.append([sr, sc])
            
            while q:
                a,b = q[0]
                q.pop(0)
                
                for x,y in dir:
                    nr = a+x
                    nc = b+y
                    if 0<= nr < m and 0 <= nc < n and (nr, nc) not in v and image[nr][nc] == c:
                        image[nr][nc] = newColor
                        v.add((nr, nc))
                        q.append([nr, nc])
        
        v.add((sr, sc))
        image[sr][sc] = newColor
        bfs(sr, sc)
        return image
        