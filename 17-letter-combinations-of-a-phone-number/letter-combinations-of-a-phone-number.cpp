class Solution {
public:
    void solve(string digits, int i, vector<string> &ans, unordered_map<char, string> mp, string a){
        if(i == digits.size()){
            ans.push_back(a);
            return;
        }
        int s = mp[digits[i]].size();
        for(int k = 0; k < s; k++){
            a += mp[digits[i]][k];
            solve(digits, i+1, ans, mp, a);
            a.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        if(digits == "") return ans;
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };


        solve(digits, 0, ans, mp, "");

        return ans;
    }
};