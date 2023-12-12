//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

#define ll long long
int mod=1e9+7;
class Solution {
    public:
    ll help(int n,vector<int>& memo)
    {
        //base cases
        if(n==0)
        return 0;
        
        if(n==1 or n==2)
        return 1;
        
        //memo check 
        if(memo[n]!=-1)
        return memo[n];
        
        //recursive calls
        //small calculation
        ll a=help(n-1,memo);
        ll b=help(n-2,memo);
        return memo[n]=(a+b)%mod;
    }
    int nthFibonacci(int n){
        vector<int> memo(n+1,-1);
        ll ans=help(n,memo);
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends