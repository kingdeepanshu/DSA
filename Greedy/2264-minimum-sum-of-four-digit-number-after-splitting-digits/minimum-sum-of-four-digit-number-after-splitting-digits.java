class Solution {
    public int minimumSum(int num) {
        int arr[] = new int[4];
        int i = 0; 
        while(num > 9){
            int t = num%10;
            num /= 10;
            arr[i++] = t;
        }
        arr[i] = num;
        Arrays.sort(arr);
        int ans = ((10*arr[0])+arr[3]) + ((10*arr[1])+arr[2]);
        return ans;
    }
}