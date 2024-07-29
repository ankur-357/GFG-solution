//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        if(n==1) return {arr[0], "1"};
        
        map<string,int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        int maxi= 0;
        string answer;
        for(auto it : mpp){
            maxi = max(maxi , it.second);
        }
        for(auto it : mpp){
            if(it.second == maxi) {
                answer = it.first;
                break;
        }
        }
        
        string count = to_string(maxi);
        return {answer, count};
    }


};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends