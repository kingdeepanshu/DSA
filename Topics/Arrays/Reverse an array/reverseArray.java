import java.util.Stack;
public class reverseArray {
    static void twoPointerApproach(int arr[], int size){
        for (int i = 0; i < size-i; i++)
        {
            // int first = arr[i];
            // int last = arr[size-i-1];
            int temp = arr[i];
            arr[i] = arr[size-i-1];
            arr[size-i-1] = temp;
        }
    }
    
    static void stackApproach(int arr[], int size){
        Stack<Integer> s = new Stack<>();
        for (int i = 0; i < size; i++)
        {
            s.push(arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = s.peek();
            s.pop();
        }
    }
    public static void main(String[] args) {
        int[] arr = {1,23,4,46,56,75,87};
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        twoPointerApproach(arr, arr.length);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
        stackApproach(arr, arr.length);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
