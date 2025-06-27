class Solution {
public:
    bool isVowel(char a){
        vector<char> v = {'a', 'i', 'o', 'u', 'e', 'A', 'E', 'O', 'I', 'U'};

        for(auto i: v){
            if(a == i) return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;

        while(j > i){
            while(i < j && !isVowel(s[i])) i++;
            while(i < j && !isVowel(s[j])) j--;


            char t = s[i];
            s[i] = s[j];
            s[j] = t;

            i++;
            j--;
        }

        return s;
    }
};