//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int m = 1000000007;
class Solution
{
public:
    int waysi(int x, int y, vector<vector<int>> &dp){
         if (x < 0 || y < 0) return 0;
        if (x == 0 || y == 0) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        return dp[x][y] = ( waysi(x - 1, y,dp) + waysi(x, y - 1,dp) )% m;
    }
    int ways(int x, int y)
    {
        vector<vector<int>>dp(x+1,vector<int>(y+1,-1));
        //code here.
        return waysi(x,y,dp);
    }

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends