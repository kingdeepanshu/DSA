class Solution:
	def isCycle(self, V, edges):
		#Code here
		adj = [[] for i in range(V)]
		for u, v in edges:
		    adj[u].append(v)
		    adj[v].append(u)

		ans = False

		v = [False for i in range(len(adj))]
	    def dfs(i, p):
	        nonlocal ans
	       # if v[i] == True: return

	        for j in adj[i]:
	            if v[j] == True and p != j:
	                ans = True
	            if v[j] == False:
	                v[j] = True
	                dfs(j, i)

	    for i in range(len(adj)):
	        if v[i] == False:
	            v[i] = True
	            dfs(i, -1)

	    return ans
