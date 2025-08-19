class Solution {
public:
    void solve(int n, string a, vector<string> &ans, int open){
        if(n == 0){
            ans.push_back(a);
            return;
        }

        if(open < n) solve(n-1, a+'(', ans, open+1);

        if(open > 0) solve(n-1, a+')', ans, open-1);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        string a;

        solve(2*n, "", ans, 0);

        return ans;
    }
};