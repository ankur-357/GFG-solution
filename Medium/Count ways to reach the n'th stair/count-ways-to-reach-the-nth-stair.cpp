//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int solve(int i, vector<int> &dp){
        if(i==0){
            return 1;
        }
        if(i==1){
            return 1;
        }
        if(dp[i]!=-1) return dp[i];
        return dp[i] = (solve(i-1, dp)+ solve(i-2, dp))% 1000000007;
    }
    int countWays(int n)
    {
        vector<int> dp(n+1, -1);
        return solve(n, dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends