//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int arr[], int n)
    {
        unordered_map<int,pair<int,int>> mp;
        for(int i=0;i<n;i++)
        {
          if(mp.find(arr[i])==mp.end())
          {
              mp[arr[i]].first = i;
              mp[arr[i]].second = -1e7;
          }
          else{
             mp[arr[i]].second = i; 
          }
        }
        int res = INT_MIN;
        for(auto it : mp)
        {
            //cout<<it.first<<" -> "<<it.second.first<<" "<<it.second.second<<" "<<endl;
            res = max(res,(it.second.second-it.second.first));
        }
        return res<0 ? 0 : res;
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends