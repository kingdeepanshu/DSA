class Solution {
    public int minStoneSum(int[] piles, int k) {
        PriorityQueue<Integer> pq = new PriorityQueue<>((a, b) -> b-a);
        for(int i = 0; i < piles.length; i++){
            pq.add(piles[i]);
        }

        while(k > 0){
            int m = pq.poll();
            m = (int)(m - Math.floor(m/2));
            pq.add(m);
            k--;
        }
        int sum = 0;
        while(!pq.isEmpty()){
            sum += pq.poll();
        }
        return sum;
    }
}