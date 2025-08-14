class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> ans;
        vector<bool> vis(adj.size(), false);
        queue<int> q;
        
        vis[0] = true;
        q.push(0);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            ans.push_back(curr);
            
            for(int x: adj[curr]){
                if(vis[x] == false){
                    vis[x] = true;
                    q.push(x);
                }
            }
        }
        
        return ans;
    }
};