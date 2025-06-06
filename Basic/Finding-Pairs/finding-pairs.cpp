//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	

int count_pairs(vector<char> &arr, string &s,int n,int m){
	    // Complete the function
	    unordered_map<char,int> mp;
	    int count=0;
	    for(int i=0;i<m;i++){
	        mp[s[i]]++;
	    }
	    for(int i=0;i<n;i+=2){
	        int c1=arr[i];
	        int c2=arr[i+1];
	        if(mp[c1]>0 && mp[c2]>0){
	            count++;
	        }
	    }
	    return count;
}

};

//{ Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<char> arr;
        
        for(int i=0;i<2*n;i+=2){
            char x,y;cin>>x>>y;
            arr.push_back(x);
            arr.push_back(y);
        }
        
        string s;cin>>s;
        Solution ob;
        cout<<ob.count_pairs(arr,s,2*n,m)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends