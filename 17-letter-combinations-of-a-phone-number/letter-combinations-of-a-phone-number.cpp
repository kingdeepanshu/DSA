class Solution {
public:
    void solve(string digits, unordered_map<char, string> mp, vector<string> &ans, string c, int i){
        if(i >= digits.size()){
            ans.push_back(c);
            return;
        }else{
            string pair = mp[digits[i]];
            for(int j = 0; j < mp[digits[i]].size(); j++){
                solve(digits, mp, ans, c+pair[j], i+1);
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;

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

        string c = "";

        solve(digits, mp, ans, c, 0);
        return ans;
    }
};