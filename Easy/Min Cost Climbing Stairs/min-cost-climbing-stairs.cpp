//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
    private:

   //Recursion
    int solve(vector<int>&cost,int n){
        if(n==0)return cost[0];
        if(n==1)return cost[1];
        return cost[n]+min(solve(cost,n-1),solve(cost,n-2));
    }

    //Top Down Approach
    int solveTD(vector<int>&cost,int n,vector<int>&dp){
        if(n==0||n==1)return cost[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n]=cost[n]+min(solveTD(cost,n-1,dp),solveTD(cost,n-2,dp));
    }
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        
     // Recursion
        // int ans=min(solve(cost,N-1),solve(cost,N-2));
        // return ans;

    //Top Down Approach
        // vector<int>dp(N,-1);
        // int ans=min(solveTD(cost,N-1,dp),solveTD(cost,N-2,dp));
        // return ans;

      //Bottom Up Approach
        vector<int>dp(N,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<N;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[N-1],dp[N-2]);

    //Space Optimization
        // int prev2=cost[0];
        // int prev1=cost[1];
        // for(int i=2;i<N;i++){
        //     int curr=cost[i]+min(prev1,prev2);
        //     prev2=prev1;
        //     prev1=curr;
        // }
        // return min(prev1,prev2);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends