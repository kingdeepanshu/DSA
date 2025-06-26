class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size()-1;
        int i = 0;
        int j = n;
        int ans = 0;
        // int m = 0;
        while(i < j){
            int a = j-i;
            int b = min(height[i], height[j]);
            int m = a*b;
            if(height[i] <= height[j]){
                i++;
            }else{
                j--;
            }
            ans = max(m, ans);
        }
        return ans;
    }
};