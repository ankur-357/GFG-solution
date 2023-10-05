//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long findMaxOddSubarraySum( long long a[], long long n ) {
        long long s{}, m( 1e3 );
        while ( n-- ) {
            if ( a[ n ] > 0 ) s += a[ n ];
            if ( a[ n ] & 1 ) m = min( m, abs( a[ n ] ) );
        }
    return s & 1 ? s : m != 1e3 ? s - m : -1;
    } // T: 0.48 - 0.50
 
};

//{ Driver Code Starts.


int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;    
        cout <<ob.findMaxOddSubarraySum(arr, n);
        cout<<endl;
    }

    
    return 0;
}
// } Driver Code Ends