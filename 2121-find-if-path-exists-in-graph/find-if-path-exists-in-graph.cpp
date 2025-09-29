class Solution {
public:
    vector<vector<int>> adj(vector<vector<int>> edges, int n){
        vector<vector<int>> ans(n);
        for(auto i: edges){
            ans[i[0]].push_back(i[1]);
            ans[i[1]].push_back(i[0]);
        }

        return ans;
    }

    bool bfs(vector<vector<int>> &adjList, int s, int d, vector<bool> &vis){
        queue<int> q;
        q.push(s);
        vis[s] = true;

        while(!q.empty()){
            int a = q.front();
            q.pop();
            if(a == d) return true;

            for(auto i: adjList[a]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList = adj(edges, n);


        vector<bool> vis(n, false);
        return bfs(adjList, source, destination, vis);
        
    }
};