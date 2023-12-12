//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
int minAdjustmentCost(int A[], int n, int target)
	{
	    // Your code goes here
	     int M= 100;
	     int dp[n][M + 1];
 
    // handle first element of array separately
    for (int j = 0; j <= M; j++)
        dp[0][j] = abs(j - A[0]);
 
    // do for rest elements of the array
    for (int i = 1; i < n; i++)
    {
        // replace A[i] to j and calculate minimal adjustment
        // cost dp[i][j]
        for (int j = 0; j <= M; j++)
        {
          // initialize minimal adjustment cost to INT_MAX
          dp[i][j] = INT_MAX;
 
          // consider all k such that k >= max(j - target, 0) and
          // k <= min(M, j + target) and take minimum
          for (int k = max(j-target,0); k <= min(M,j+target); k++)
             dp[i][j] = min(dp[i][j], dp[i - 1][k] + abs(A[i] - j));
        }
    }   
 
    // return minimum value from last row of dp table
    int res = INT_MAX;
    for (int j = 0; j <= M; j++)
        res = min(res, dp[n - 1][j]);
 
    return res;
	}

};
	  


//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, k;
	    cin>>n >> k;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        cout << ob.minAdjustmentCost(a,n,k);	
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends