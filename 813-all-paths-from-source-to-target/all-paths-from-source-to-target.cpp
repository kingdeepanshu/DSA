class Solution {
public:
    void dfs(vector<vector<int>> &graph, vector<vector<int>> &ans, int s, int d, vector<int> a){
        a.push_back(s);
        if(s == d){
            ans.push_back(a);
            return;
        }

        for(int i: graph[s]){
            dfs(graph, ans, i, d, a);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        int n = graph.size();

        vector<bool> vis(n, false);

        dfs(graph, ans, 0, n-1, {});

        return ans;
    }
};