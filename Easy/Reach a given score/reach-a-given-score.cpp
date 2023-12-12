//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends
// Complete this function
int a[3] = {3,5,10};
int f(int n,int i,vector<vector<int>> &dp){
    if(n==0) return 1;
    if(i==2){
        if(n%a[2]==0) return 1;
        return 0;
    }
    if(dp[n][i]!=-1) return dp[n][i];
    int np = f(n,i+1,dp);
    int p=0;
    if(n-a[i]>=0) p = f(n-a[i],i,dp);
    return dp[n][i]=p+np;
    
}
long long int count(long long int n)
{
    long long int table[n+1],i;
    memset(table, 0, sizeof(table));
    table[0]=1;                 // If 0 sum is required number of ways is 1.
    
    // Your code here
    vector<vector<int>> dp(n+1,vector<int>(3,-1));
    table[n] = f(n,0,dp);
    return table[n];
}



//{ Driver Code Starts.



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends