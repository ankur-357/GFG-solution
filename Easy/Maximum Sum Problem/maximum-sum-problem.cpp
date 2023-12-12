//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
    int fun(int n,vector<int>&dp)
        {
            if(n<=0)
            return 0;
            else if(dp[n]!=-1)
            return dp[n];
            else
            {
                int a=max(n/2,fun(n/2,dp));
                int b=max(n/3,fun(n/3,dp));
                int c=max(n/4,fun(n/4,dp));
                
                return dp[n]=max(n,a+b+c);
            }
        }
    public:
int maxSum(int n)
        {
            if(n < 12)return n;
            int dp[n+1];
            for(int i=0; i<n+1; i++){
                if(i < 12)dp[i] = i;
                else{
                    int a = dp[i/2];
                    int b = dp[i/3];
                    int c = dp[i/4];
                    
                    dp[i] = max(a+b+c, i);
                }
            }
            return dp[n];
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends