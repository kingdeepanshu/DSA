class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1) return 1;
        sort(s.begin(), s.end());
        int c = 1;
        int ans = 0;
        bool o = false;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                c++;//4 
            }else{
                if(c%2 == 0) ans += c;
                else {
                    ans += c-1;
                    o = true;
                }
                c = 1;
            }
        }
        if(c%2 == 0) ans += c;
        else {
            ans += c-1;
            o = true;
        }

        return o?ans+1:ans;
    }
};