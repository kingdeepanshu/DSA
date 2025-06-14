// User function Template for C++

class Solution {
  public:
    int f(int n){
        int c = 0;
        while(n){
            c += n&1;
            n >>= 1;
        }
        
        return c;
    }
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
        if(f(n) > 1 || n == 0) return false;
        return true;
    }
};