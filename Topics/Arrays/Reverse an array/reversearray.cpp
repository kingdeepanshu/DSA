#include <iostream>
#include <stack>
using namespace std;

void twoPointerApproach(int arr[], int size){
    for (int i = 0; i < size-i; i++)
    {
        int first = arr[i];
        int last = arr[size-i-1];
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

void stackApproach(int arr[], int size){
    stack<int> s;
    for (int i = 0; i < size; i++)
    {
        s.push(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
}

int main(int argc, char const *argv[])
{
    int arr[7] = {1,2,3,4,5,6,7};

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    twoPointerApproach(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    stackApproach(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
