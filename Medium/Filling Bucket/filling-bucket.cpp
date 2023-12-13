//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int fillingBucket(int N) {
        // code here
        if(N==1)return 1;
        // code here
        long int a=1;
        long int b=1;
        long int c=0;
        long int mod=100000000;
        for(int i=2;i<=N;i++){
            c=((a%mod)+(b%mod))%mod;
            a=b%mod;
            b=c%mod;
        }
        return(int )(c%mod);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends