//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    if (N <= 0 || K <= 0 || K > N) {
        return 0;  // Invalid input, return 0 or handle appropriately
    }

    vector<long> dp(N + 1, 0);
    long ans = 0;

    // Calculate initial sum and populate dp array
    for (int i = 0; i < K; i++) {
        dp[i] = Arr[i];
        ans += Arr[i];
    }

    // Sliding window to find the maximum sum subarray
    long sum = ans;
    for (int i = K; i < N; i++) {
        sum = sum + Arr[i] - Arr[i - K];  // Update the sum for the current window
        ans = max(ans, sum);
    }

    return ans;
}


};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends