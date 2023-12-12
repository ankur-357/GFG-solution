//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long fn(int sum,vector<int> &dp){
        if(sum==0){
            return 1;
        }
        if(sum<0){
            return 0;
        }
        if(dp[sum]!=-1){
            return dp[sum];
        }
        
        long long mod=1e9+7L;
        int res=(fn(sum-1,dp)%mod+fn(sum-2,dp)%mod+fn(sum-3,dp)%mod)%mod;
     

       return  dp[sum]=res;
       // return res;
    }
    long long countWays(int n)
    {
        vector<int> dp(n+1,-1);
        return fn(n,dp);
       
        
    }
};



//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends