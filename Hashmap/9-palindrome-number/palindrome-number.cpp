class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        vector<int> b;
        while(x > 9){
            int t = x%10;
            x /= 10;
            b.push_back(t);
        }
        b.push_back(x);
        for(int i = 0; i < b.size()/2; i++){
            if(b[i] != b[b.size()-1-i]) return false;
        }
        return true;
    }
};