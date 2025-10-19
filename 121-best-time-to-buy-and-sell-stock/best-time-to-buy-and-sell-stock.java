class Solution {
    public int maxProfit(int[] prices) {
        int mip = Integer.MAX_VALUE;
        int pro = 0;

        for(int i: prices){
            mip = Math.min(i, mip);
            pro = Math.max(pro, i - mip);
        }

        return pro;
    }
}