//{ Driver Code Starts
#include <iostream>
#include<algorithm>
#include<cstdio>
//#include<Windows.h> 
using namespace std;  

// } Driver Code Ends





class Solution {
public:
    int max_Books(int a[], int n, int k) {
        int dp[n] = {0}; // Initialize the dp array with zeros
        int ans = -1;

        if (a[0] <= k) {
            dp[0] = a[0];
        }
        
        ans = dp[0]; // Update ans with dp[0]

        for (int i = 1; i < n; i++) {
            if (a[i] <= k) {
                // If dp[i-1] is positive, it means we can extend the sequence.
                if (dp[i - 1] > 0) {
                    dp[i] = a[i] + dp[i - 1];
                }
                else {
                    dp[i] = a[i]; // Otherwise, start a new sequence.
                }
            }
            // Update ans with the maximum value between ans and dp[i].
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};




//{ Driver Code Starts.
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	Solution ob;
  	cout<<ob.max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}


// } Driver Code Ends