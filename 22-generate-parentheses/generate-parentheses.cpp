class Solution {
public:
    void solve(vector<string> &ans, int n, int op, int cl, string &com){
        if(op == n && cl == n){
            ans.push_back(com);
            return;
        }else{
            if(op < n){
                com = com+'(';
                solve(ans, n, op+1, cl, com);
                com.pop_back();
            }
            if(cl < op){
                com = com+')';
                solve(ans, n, op, cl+1, com);
                com.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string com = "";
        solve(ans, n, 0, 0, com);
        return ans;
    }
};