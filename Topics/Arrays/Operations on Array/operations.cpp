#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaration of array
    int array[5];

    // initialization of array
    int array2[5] = {1,2,3,4,5};

    //initialization of array without declaring the size
    int array3[] = {1,2,3,4,5,6,7,8,9};

    // accessing any element of array using index
    cout<<"element at 2nd index is "<<array2[2]<<endl<<endl;

    //ARRAY TRAVERSAL
    cout<<"Array traversal"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<array2[i]<<" ";
    }
    cout<<endl<<endl;
    
    // charater array = strings
    char charArray[5] = {'h', 'i', 'd', 'e', 'v'};

    int array1d[2] = {1,2};
    int array2d[2][2] = {{1,2}, {2,3}}; //matrix
    int array3d[2][2][2] = {{{1,2}, {2,3}}, {{1,2}, {2,3}}};

    // 2d array traversal
    cout<<"2d array traversal"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<array2d[i][j]<<" ";
        }
        cout<<endl;
    }    

    return 0;
}
