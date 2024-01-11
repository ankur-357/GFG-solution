//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int woodCollected(int *arr, int h, int n) {
        int woodCollected = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > h) {
                woodCollected += (arr[i] - h);
            }
        }
        return woodCollected;
    }

    int find_height(int tree[], int n, int k) {
        // code here
        int low = 0;
        int high = *max_element(tree, tree + n);  // Maximum tree height
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int collectedWood = woodCollected(tree, mid, n);

            if (collectedWood == k) {
                ans = mid;
                break;
            } else if (collectedWood > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
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
        int n,k;
        cin>>n;

        int tree[n];
        for(int i=0; i<n; i++)
            cin>>tree[i];
        cin>>k;
        Solution ob;
        cout<< ob.find_height(tree,n,k) << endl;
    }
    return 1;
}
// } Driver Code Ends