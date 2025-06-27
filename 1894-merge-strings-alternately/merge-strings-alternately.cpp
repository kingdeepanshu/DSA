class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;

        string ans = "";

        while(i < word1.size() || j < word2.size()){
            if(i < word1.size()) ans+=word1[i];
            if(j < word2.size()) ans+=word2[j];
            i++;
            j++;
        }

        return ans;
    }
};