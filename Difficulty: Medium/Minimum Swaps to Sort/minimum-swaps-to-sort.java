class Solution {
    // Function to find the minimum number of swaps required to sort the array.
    public int minSwaps(int arr[]) {
        // Code here
        int n = arr.length;
        int swap = 0;
        int[][] pairs = new int[n][2];
        
        
        for(int i = 0; i < n; i++){
            pairs[i][0] = arr[i];
            pairs[i][1] = i;
        }
        
        Arrays.sort(pairs, Comparator.comparingInt(a -> a[0]));
        
        int[] pos = new int[n];
        
        for(int i = 0; i < n; i++){
            pos[i] = pairs[i][1];
        }
        
        boolean[] vis = new boolean[n];
        
        for(int i = 0; i < n; i++){
            if(vis[i] || pos[i] == i){
                continue;
            }else{
                int j = i;
                int k = 0;
                while(!vis[j]){
                    vis[j] = true;
                    k++;
                    j = pos[j];
                }
                swap += k-1;
            }
        }
        
        return swap;
    }
}