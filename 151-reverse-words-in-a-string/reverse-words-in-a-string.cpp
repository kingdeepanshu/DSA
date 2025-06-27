class Solution {
public:
    string reverseWords(string s) {
        vector<string> w;
        string a = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(a != "") w.push_back(a);
                a = "";
            }else{
                a += s[i];
            }
        }
        if(a != "") w.push_back(a);

        string ans = "";
        for(int i = w.size()-1; i >= 0; i--){
            ans += w[i];
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};