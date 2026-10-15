class Solution:
    def isCyclic(self, V: int, edges: list[list[int]]) -> bool:
        # code here
        adj = [[] for i in range(V)]
        v = [0] * V
        for a, b in edges:
            adj[a].append(b)
            
        def dfs(i):
            nonlocal adj, v
            if v[i] == 1: return True
            
            if v[i] == 2: return False
            
            v[i] = 1
            
            for j in adj[i]:
                if dfs(j): return True
                    
            v[i] = 2
            return False
        
        
        for i in range(V):
            if v[i] == 0:
                if dfs(i): return True
        
        return False