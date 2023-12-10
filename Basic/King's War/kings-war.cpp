//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include<bits/stdc++.h>

class Solution{
    public:
long long SoldierRequired(long long a[], long long n)
{
    // Your code goes here
    long long max = INT_MIN; // Initialize to the minimum possible value
    long long min = INT_MAX; // Initialize to the maximum possible value
    
    for (long long i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
        if (min > a[i]) {
            min = a[i];
        }
    }

    long long countmax = 0; // Initialize to 0
    long long countmin = 0;

    for (long long i = 0; i < n; i++) {
        if (a[i] == max) {
            countmax++;
        }
        if (a[i] == min) {
            countmin++;
        }
    }
    if(max==min){
        return n-countmax;
    }
    return n - (countmax + countmin);
}
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.SoldierRequired(a, n)<<endl;
    }
	return 0;
}
// } Driver Code Ends