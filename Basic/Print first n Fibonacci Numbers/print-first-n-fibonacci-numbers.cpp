//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
private:
    long long f(int n, vector<long long>& dp) {
        if (n <= 1)
            return 1; // Changed to return 1 instead of n for Fibonacci sequence to start with 1 1.
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
    }

public:
    // Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n)
    {
        vector<long long> dp(n, -1);
        dp[0] = dp[1] = 1; // Initialize the first two elements as 1.
        for (int i = 2; i < n; i++) {
            dp[i] = f(i, dp); // Calculate the Fibonacci numbers starting from the third element.
        }
        return dp;
    }
};




//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends