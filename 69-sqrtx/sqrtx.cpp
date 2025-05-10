class Solution {
public:
    int mySqrt(int x) {
        int s = 0;
        int e = x;
        long long int ans = -1;
        while(e >= s){
            long long int m = s + (e-s)/2;
            long long int ms = m*m;
            if(ms == x) return m;
            else if(ms > x){
                e = m-1;
            }else{
                ans = m;
                s = m+1;
            }
        }
        return ans;
    }
};