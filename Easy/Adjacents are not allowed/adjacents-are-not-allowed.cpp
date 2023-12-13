//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   int space_optimized(int n,vector<vector<int>>mat)
    {
        int first=max(mat[0][0],mat[1][0]);
        int second=0;
        for(int index=1;index<n;index++)
        {
            
            int take=max(mat[0][index],mat[1][index])+second;
        int notake=first;
        
          second=first;
          first=max(take,notake);
         
        }
        return first;
    }
    int maxSum(int N, vector<vector<int>> mat)
    {
        // code here
        vector<int>dp(N+1,-1);
        // int ans=solve(N,mat,N-1,dp);
        int ans=space_optimized(N,mat);
        return ans;
       
        
      
    }


};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> mat(2, vector<int>(N, 0));
        for(int i = 0;i < 2; i++){
            for(int j = 0; j < N; j++)
                cin>>mat[i][j];
        }
        
        Solution ob;
        cout<<ob.maxSum(N, mat)<<"\n";
    }
    return 0;
}
// } Driver Code Ends