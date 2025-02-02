class Solution {
public:
    bool isPalindrome(string s) {
        string m = "";
        for (auto i : s) {
            if (isalpha(i)) {
                i = tolower(i);
                m += i;
            }
            if(isdigit(i)){
                m += i;
            }
        }
        string n = m;
        reverse(m.begin(), m.end());
        for (int i = 0; i < m.size(); i++) {
            if (n[i] != m[i])
                return false;
        }
        return true;
    }
};