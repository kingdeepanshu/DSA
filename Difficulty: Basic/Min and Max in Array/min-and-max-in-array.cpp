// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int m = INT_MIN;
        int n = INT_MAX;
        
        for(int i: arr){
            if(m <= i) m = i;
            if(n >= i) n = i;
        }
        
        return make_pair(n, m);
    }
};