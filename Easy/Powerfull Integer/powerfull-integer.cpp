//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
        vector<pair<int,int>> arr ;
        for(auto p:intervals)
        {
            arr.push_back({p[0],'a'}) ;
            arr.push_back({p[1],'b'}) ;
        }
        sort(arr.begin(),arr.end()) ;
        int count = 0 , out = -1 ;
        for(auto p:arr)
        {
            if(p.second == 'a')
            {
                count++ ;
                if(count >= k) out = p.first ;
            }
            else
            {
                if(count >= k) out = p.first ;
                count-- ;
            }
        }
        return out ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends