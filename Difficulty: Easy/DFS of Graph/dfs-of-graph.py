class Solution:
    def dfs(self, adj):
        # code here
            
        v = [False for i in range(len(adj))]
        ans = []
        
        def f(i):
            nonlocal ans, v
            if v[i]:
                return
            
            v[i] = True 
            ans.append(i)
            for j in adj[i]:
                if v[j] == False:
                    f(j)
        
        for i in range(len(adj)):
            if v[i] == False:
                f(i)
            
        return ans