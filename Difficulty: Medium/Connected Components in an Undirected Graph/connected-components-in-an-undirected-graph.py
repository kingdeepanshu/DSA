class Solution:
    def getComponents(self, V, edges):
        # code here
        adj = [[] for i in range(V)]
        for a, b in edges:
            adj[a].append(b)
            adj[b].append(a)
        
        v = set()
        ans = []
        a = []
        def dfs(i):
            nonlocal a
            v.add(i)
            for j in adj[i]:
                if j not in v:
                    a.append(j)
                    dfs(j)
            
        
        for i in range(V):
            if i not in v:
                v.add(i)
                a.append(i)
                dfs(i)
                ans.append(a)
                a = []
                
        return ans