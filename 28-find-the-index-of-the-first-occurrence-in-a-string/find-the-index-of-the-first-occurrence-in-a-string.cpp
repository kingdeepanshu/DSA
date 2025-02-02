class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        int j = 0;
        for(int i = 0; i < haystack.size(); i++){
            bool o = false;
            if(haystack[i] == needle[j]){
                o = true;
                while(j < needle.size() && i+j < haystack.size()){
                    if(haystack[i+j] != needle[j]){
                        j = 0;
                        o = false;
                        break;
                    }else{
                        o = true;
                    }
                    j++;
                }
            }
            if(o && j == needle.size()){
                return i;
            }
        }
        return -1;
    }
};