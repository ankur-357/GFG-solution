//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function template for C++

class Solution{   
public:
    long long maxProduct(int n) {
        long long val[n + 1];
        val[0] = val[1] = 0;

        // Build the table val[] in bottom up manner 
        // and return the last entry from the table
        for (int i = 1; i <= n; i++) 
        {
            long long max_val = 0;
            for (int j = 1; j <= i / 2; j++)
                max_val = max({max_val, (i - j) * (long long)j, j * val[i - j]});
            val[i] = max_val;
        }
        return val[n];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.maxProduct(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends