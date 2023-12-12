//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	   
	   int f(int i, vector<int> &dp){
	   if(i <= 0) return 0;
        if(i == 1) return 1;
        if(i == 2) return 2;
        
        if(dp[i] != -1) return dp[i];
        
        return dp[i] = (f(i-1 , dp) +f(i-2 , dp))%(int)(1e9+7);
	   }

       // return res;
		int nthPoint(int n){
		    // Code here
		    vector<int> dp(n+1,-1);
		    return f(n, dp);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends