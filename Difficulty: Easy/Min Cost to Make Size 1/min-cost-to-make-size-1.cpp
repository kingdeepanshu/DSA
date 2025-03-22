//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:

    int cost(vector<int>& arr) {
        // code here
        if(arr.size() == 1) return 0;
        int min = arr[0];
        for(auto i: arr){
            if(min >= i){
                min = i;
            }
        }
        return min*(arr.size()-1);
    }
};


//{ Driver Code Starts.

int main() {

    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        int result = ob.cost(arr);

        cout << (result) << endl;
    }
    return 0;
}

// } Driver Code Ends