#include <iostream>
using namespace std;

int approach1(int a[], int n){
    int q =0, b = 0, c = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > q){
            c = b;
            b = q;
            q = a[i];
        }else if(a[i] > b){
            c = b;
            b = a[i];
        }else if(a[i] > c){
            c = a[i];
        }
        cout<<q<<" "<<b<<" "<<c<<endl;  
    }
    cout<<q<<" "<<b<<" "<<c<<endl;  
}

int sumOfLargestThreeNumbers(int arr[], int size){
    int sum;
        int q = 0;
        int w = 0;
        int e = 0;
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

int main(int argc, char const *argv[])
{
    int arr[7] = {1,6,3,8,2,9,4};

    approach1(arr, 7);
    cout<<sumOfLargestThreeNumbers(arr, 7)<<endl;
    return 0;
}
