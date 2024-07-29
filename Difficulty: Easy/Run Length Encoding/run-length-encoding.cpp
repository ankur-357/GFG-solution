//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string encode(string s) {
        // code here
        int n = s.size();
        string encoded = "";
        
        for(int i=0;i<n;i++){
            int cnt = 1;
            while(i < n - 1 && s[i] == s[i+1]){
                cnt++;
                i++;
            }
            encoded += s[i];
            encoded += to_string(cnt);
        }
        return encoded;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        string s;
        getline(cin,s);
        
        Solution obj;
        string res = obj.encode(s);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends