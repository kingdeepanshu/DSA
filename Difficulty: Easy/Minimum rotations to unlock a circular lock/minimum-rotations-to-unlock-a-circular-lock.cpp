//{ Driver Code Starts
// Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution{
public:
    int rotationCount(long long R, long long D)
    {
        int ans = 0;
        while(R > 9){
            int a = R%10;
            int b = D%10;
            R /= 10;
            D /= 10;
            int n = abs(a-b);
            if(n <= 5) ans += n;
            else ans += (10-n);
        }
        int n = abs(R-D);
        if(n <= 5) ans += n;
        else ans += (10-n);
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long R, D;
        cin>>R>>D;
        
        Solution ob;
        cout<<ob.rotationCount(R, D)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends