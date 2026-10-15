class Solution:
    def topoSort(self, V: int, edges: list[list[int]]) -> list[int]:
        # Code here
        ans = []
        v = set()
        adj = [[] for i in range(V)]
        for a,b in edges:
            adj[a].append(b)
            
        def dfs(i):
            nonlocal ans, v, adj
            if i in v:
                return 
            v.add(i)
            for j in adj[i]:
                if j not in v:
                    dfs(j)
            
            ans.append(i)
            
        
        for i in range(V):
            if i not in v:
                dfs(i)
            
        return ans[::-1]