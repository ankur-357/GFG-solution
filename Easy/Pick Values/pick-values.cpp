//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int pickValues(int arr[], int n) {
    // code here
    int dp[n + 1];
    memset(dp, 0, sizeof dp);

    if (n < 4) {
        return *min_element(arr, arr + n);
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = INT_MAX;
        for (int j = i - 3; j <= i; j++) {
            dp[i] = min(dp[i], dp[j - 1] + arr[j - 1]);
        }
    }

    return dp[n];
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
        auto ans = ob.pickValues(arr, n);
        cout << ans << "\n";
    }
    return 0;
}



// } Driver Code Ends