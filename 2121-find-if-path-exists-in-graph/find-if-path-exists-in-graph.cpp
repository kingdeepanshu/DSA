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

    void bfs(vector<vector<int>> &adjList, int s, int d, vector<bool> &vis, bool &ans){
        queue<int> q;
        q.push(s);
        vis[s] = true;

        while(!q.empty()){
            int a = q.front();
            q.pop();
            if(a == d) ans = true;

            for(auto i: adjList[a]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adjList = adj(edges, n);

        bool ans = false;

        vector<bool> vis(n, false);
        bfs(adjList, source, destination, vis, ans);
        // for(int i = 0; i < n; i++){
        //     if(!vis[i] && i == source){
        //         bfs(adjList, i, destination, vis);
        //     }
        // }

        return ans;
    }
};