class Solution {
public:
    void dfs(unordered_map<int, list<int>> &al, vector<bool> &vis, int a, int &ans){
        vis[a] = true;

        for(auto i: al[a]){
            if(!vis[i]){
                ans--;
                dfs(al, vis, i, ans);
            }
        }
    }

    void bfs(unordered_map<int, list<int>> &al, vector<bool> &vis, int a){
        queue<int> q;
        q.push(a);
        vis[a] = true;

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(int i: al[f]){
                if(!vis[i]){
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int, list<int>> al;
        for(int i = 0; i < isConnected.size(); i++){
            for(int j = 0; j < isConnected[i].size(); j++){
                if(isConnected[i][j] == 1){
                    al[i].push_back(j);
                    al[j].push_back(i);
                }
            }
        }

        int v = isConnected.size();

        // int ans = v;
        int ans = 0;

        vector<bool> vis(v, false);
        for(int i = 0; i < v; i++){
            if(!vis[i]){
                // dfs(al, vis, i, ans);
                bfs(al, vis, i);
                ans++;
            }
        }

        return ans;
    }
};