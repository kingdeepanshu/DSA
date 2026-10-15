class Solution:
    def isBipartite(self, V, edges):
        # code here
        adj = [[] for i in range(V)]
        v = [0] * V
        for a, b in edges:
            adj[a].append(b)
            adj[b].append(a)
            
        def dfs(i, c):
            nonlocal v, adj
            v[i] = c
            
            for j in adj[i]:
                if v[j] == 0:
                    if not dfs(j, -c):
                        return False
                elif v[j] == c:
                    return False
                    
            return True
        
        for i in range(V):
            if v[i] == 0:
                if not dfs(i, 1):
                    return False
                    
        return True
        