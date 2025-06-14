class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int count = 0;
        while(n){
            count += n & 1;
            n >>= 1;
        }
        
        return count;
    }
};