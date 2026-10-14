class Solution:
    def bfs(self, adj):
        # code here
        def f(i):
            nonlocal v, ans, q
            q.append(i)
            v[i] = True
            
            while q:
                f = q[0]
                q.popleft()
                ans.append(f)
                
                for j in adj[f]:
                    if v[j] == False:
                        v[j] = True
                        q.append(j)
            
        v = [False for i in range(len(adj))]
        ans = []
        q = deque()
        
        for i in range(len(adj)):
            if v[i] == False:
                f(i)
                
        return ans
                