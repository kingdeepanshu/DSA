class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int m = 0;

        int i = 0;
        int j = height.size()-1;
        while(i < j){
            int a = min(height[i], height[j]);
            int b = j-i;

            m = a*b;
            ans = max(m, ans);

            if(height[i] >= height[j]) j--;
            else i++;
        }

        return ans;
    }
};