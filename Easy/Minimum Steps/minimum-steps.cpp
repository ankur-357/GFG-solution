//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    vector<int> dp;
    
    int fun(int n, int p, int q)
    {
        // If p and q are both greater than n the only possible steps are equal to 1 (zeroth power)
        if (n < p && n < q)
            return n;
        // If the value of n is already calculated the function exits and returns the result
        if (dp[n] > -1)
            return dp[n];

        
        int e, c, a;
        
        // Calculation of logarithm with base equal to p of n
        e = (int)(log(n) / log(p));
        // If the power of p with this exponent is equal to n the function exits and returns 1
        // because with the next step n become 0
        if (n == (int)pow(p, e))
            return 1;
        // Otherwise n is decrised of the power of p with this exponent and the function is recalled
        c = fun(n - (int)pow(p, e), p, q);
        // Calculation of logarithm with base equal to q of n
        e = (int)(log(n) / log(q));
        // If the power of q with this exponent is equal to n the function exits and returns 1
        // because with the next step n become 0
        if (n == (int)pow(q, e))
            return 1;
        // Otherwise n is decrised of the power of q with this exponent and the function is recalled
        a = fun(n - (int)pow(q, e), p, q);
        // The minimum of above results is calculated and it is increased of 1 for the step in this instance
        dp[n] = min(c, a) + 1;
        return dp[n];
    }
    
    public:
        
    int moves(int n, int p, int q)
    {
        // Your code goes here   
        dp.resize(n + 1, -1);
        return fun(n, p, q);
    }
};



//{ Driver Code Starts.

int main()
{
    int n,p,q,t;
    cin>>t;
    while(t--){
        cin>>n>>p>>q;
        Solution ob;
        cout<<ob.moves(n, p, q)<<endl;
    }
}

// } Driver Code Ends