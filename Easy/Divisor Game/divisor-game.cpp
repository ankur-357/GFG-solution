//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
bool solve(int N){
    if(N<=1) return false;
    for(int i=1;i<N;i++){
        if(N%i==0){
           return !solve(N-i);
        }
    }
    return false;
}
    bool divisorGame(int N) {
        // code here
        return solve(N);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N; 
        cin >> N;
        
        Solution obj;
        bool ans = obj.divisorGame(N);
        if(ans) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}
// } Driver Code Ends