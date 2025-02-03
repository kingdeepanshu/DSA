class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "") return true;
        if(s.size() > t.size()) return false;
        int i = 0;
        int j = 0;
        while(j < t.size() && s.size() > 0){
            if(s[i] == t[j]){
                
                // System.out.println(s.charAt(i));
                // System.out.println(t.charAt(j));
                i++;
                j++;
            }else{
                j++;
            }
            if(i == s.size()){
                return true;
            }
        }
        return false;
    }
};