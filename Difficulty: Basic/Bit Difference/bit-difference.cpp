class Solution {
  public:
    int countbits(int n){
        int c = 0;
        while(n){
            c += n&1;
            n >>= 1;
        }
        
        return c;
    }
    int countBitsFlip(int a, int b) {
        // code here
        return countbits(a^b);
    }
};