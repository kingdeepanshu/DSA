class Solution {
public:
    int gcd(int a, int b){
        return b == 0? a: gcd(b, a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        string ans = "";

        if(str1+str2 != str2+str1) return ans; 

        int a = gcd(str1.size(), str2.size());

        for(int i = 0; i < a; i++) ans += str1[i];

        return ans;
    }
};