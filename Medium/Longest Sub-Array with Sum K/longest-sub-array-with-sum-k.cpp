//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <unordered_map>

class Solution {
public:
    int lenOfLongSubarr(int A[], int n, int k) {
        std::unordered_map<int, int> prefixSumMap;
        int sum = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            sum += A[i];

            // If the current sum is equal to k, update the maximum window size
            if (sum == k) {
                ans = i + 1;
            }

            // If the current sum - k is in the map, update the maximum window size
            if (prefixSumMap.find(sum - k) != prefixSumMap.end()) {
                ans = max(ans, i - prefixSumMap[sum - k]);
            }

            // If the current sum is not in the map, store it with its index
            if (prefixSumMap.find(sum) == prefixSumMap.end()) {
                prefixSumMap[sum] = i;
            }
        }

        // Return the maximum window size
        return ans;
    }
};



//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends