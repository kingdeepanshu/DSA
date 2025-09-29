class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> solve(n, vector<int>(2, 0));

        for(auto a: trust){
            solve[a[0]-1][0]++;
            solve[a[1]-1][1]++;
        }

        for(int i = 0; i < solve.size(); i++){
            auto a = solve[i];
            if(a[0] == 0 && a[1] == n-1) return i+1;
        }

        return -1;
    }
};