//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int dp[10001];
	int helper(int n){
	    if(n == 2 || n == 3) return 1;
	    
	    if(dp[n] != -1) return dp[n];
	    int div3 = INT_MAX, div2 = INT_MAX, notdiv = INT_MAX;
	    if(n%3 == 0) div3 = helper(n/3);
	    if(n%2 == 0) div2 = helper(n/2);
	    notdiv = helper(n-1);
	    
	    return dp[n] = 1 + min(div3, min(div2, notdiv));
	}
	int minSteps(int N) 
	{ 
	    if(N == 1) return 0;
	    memset(dp, -1, sizeof(dp));
	    return helper(N);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends