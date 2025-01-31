class Solution {
    public int balancedStringSplit(String s) {
        int r = 0;
        int l = 0;
        int ans = 0;
        for(int j = 0; j < s.length(); j++){
            char i = s.charAt(j);
            if(i == 'R') r++;
            if(i == 'L') l++;
            if(r == l) ans++;
        }
        return ans;
    }
}