//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
// #define long long ll
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        // code here
        long long int maxel = INT_MIN;
        long long int minel = INT_MAX;
        int n = arr.size();
        for(int i = 0; i<n; i++){
            minel= min(minel, arr[i]);
            maxel = max(maxel, arr[i]);
        }
        return {minel, maxel};
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends