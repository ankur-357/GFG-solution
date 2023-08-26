//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
const int MOD = 1000000007;

long long minProduct(int arr[], int n, int k) {
    sort(arr, arr + n);
    long long result = 1;

    for (int i = 0; i < k; i++) {
        result = (result * arr[i]) % MOD;
    }

    return result;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cin>>k;
        Solution ob;
	    cout<<ob.minProduct(arr, n, k)<<endl;
    }
	return 0;
}

// } Driver Code Ends