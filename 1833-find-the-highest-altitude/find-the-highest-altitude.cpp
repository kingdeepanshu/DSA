class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m = 0;
        int a = 0;
        for(auto i: gain){
            a += i;
            m = max(m, a);
        }

        return m;
    }
};