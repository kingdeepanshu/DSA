class Solution {
    public int maxCoins(int[] piles) {
        int n = piles.length/3;
        Arrays.sort(piles);
        int ans = 0;
        int i = piles.length-2;
        for(int j = 0; j < n; j++){
            ans += piles[i];
            i -= 2;
        }
        return ans;
    }
}