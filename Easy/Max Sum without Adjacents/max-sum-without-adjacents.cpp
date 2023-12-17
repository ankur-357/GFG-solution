//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
int solveUtil(int ind, int* arr, vector<int>& dp){
    int prev = arr[0];
    int prev2 = 0;
  
    for(int i=1; i< ind; i++){
    int pick= arr[i];
    if(i>1)
    pick+= prev2;
    int nonPick = 0 + prev;
    
    int cur_i=max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
    }
    return prev;
}

int findMaxSum(int *arr, int n){
    vector<int> dp(n,-1);
    return solveUtil(n, arr, dp);
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends