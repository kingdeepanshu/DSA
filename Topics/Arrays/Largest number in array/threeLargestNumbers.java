public class threeLargestNumbers {
    static void largestNumbers(int[] arr, int size){
        int q = Integer.MIN_VALUE;
        int w = Integer.MIN_VALUE;
        int e = Integer.MIN_VALUE;
        for (int i = 0; i < size; i++) {
            if(arr[i] > q){
                e = w;
                w = q;
                q = arr[i];
            }else if(arr[i] > w){
                e = w;
                w = arr[i];
            }else if(arr[i] > e){
                e = arr[i];
            }
        }
        System.out.println(q + " " + w + " " + e);
    }

    static int sumOfThreeLargestNumbers(int[] arr, int size){
        int sum;
        int q = Integer.MIN_VALUE;
        int w = Integer.MIN_VALUE;
        int e = Integer.MIN_VALUE;
        for (int i = 0; i < size; i++) {
            if(arr[i] > q){
                e = w;
                w = q;
                q = arr[i];
            }else if(arr[i] > w){
                e = w;
                w = arr[i];
            }else if(arr[i] > e){
                e = arr[i];
            }
        }
        sum = q+w+e;
        return sum;
    }

    public static void main(String[] args) {
        int[] array = {1,7,3,9,2,7,4,0,3};

        largestNumbers(array, array.length);
        System.out.println(sumOfThreeLargestNumbers(array, array.length));
    }
}
