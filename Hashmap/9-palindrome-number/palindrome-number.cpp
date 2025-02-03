class Solution {
public:
    bool isPalindrome(int s) {
        if(s < 0) return false;
        // if(s >= 2147483647) return false;
        long long int x = s;
        long long int n = 0;
        while(x > 9){
            int t = x%10;
            x /= 10;
            n += t;
            // if(n*10 < INT_MAX){
            // }else{
            //     return false;
            // }
            n *= 10;
        }
        n += x;
        return n == s;
    }
};