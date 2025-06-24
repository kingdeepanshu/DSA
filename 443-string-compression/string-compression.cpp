class Solution {
public:
    int compress(vector<char>& chars) {
        int c = 1;
        if(chars.size() == 1) return 1;
        string s = "";
        s += chars[0];

        for(int i = 1; i < chars.size(); i++){
            if(chars[i] == chars[i-1]) c++;
            else{
                if(c > 1) s += to_string(c);
                c = 1;
                s += chars[i];
            }
        }

        if(c > 1) s += to_string(c);

        for(int i = 0; i < s.size(); i++) chars[i] = s[i];
        return s.size();
    }
};