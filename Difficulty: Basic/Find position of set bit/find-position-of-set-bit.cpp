class Solution {
  public:
    int findPosition(int n) {
        // code here
        int c = 0;
        int pos = 1;
        int ans = 0;
        while(n){
            if(n&1 == 1){
                c+=n&1;
                ans = pos;
            }
            pos++;
            n >>= 1;
        }
        return (c == 1)?ans:-1;
    }
};