//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


bool is_k_palin(string s,int k);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s ;
		cin>>s;
		int k;
		cin>>k;
		
		cout<<is_k_palin(s,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends


int solve(int i,int j,string s,vector<vector<int>>& dp)
  {
      if(i>=j) return 0;
      
      if(dp[i][j]!=-1) return dp[i][j];
      
      if(s[i]==s[j]) {
          return dp[i][j] = solve(i+1,j-1,s,dp);
      }
      
      int i1 = solve(i+1,j,s,dp)+1;
      int i2 = solve(i,j-1,s,dp)+1;
      
      return dp[i][j] = min(i1,i2);
  }
bool is_k_palin(string S,int k)
{
     vector<vector<int>> dp(S.size(),vector<int>(S.size(),-1));
        int x = solve(0,S.size()-1,S,dp);
        return x<=k?1:0;
}

 