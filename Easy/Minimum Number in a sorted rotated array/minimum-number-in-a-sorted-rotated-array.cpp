//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    // Function to find the minimum element in a sorted and rotated array.
    int solve(int arr[], int low, int high) {
        while (low < high) {
            int ans = 0;
            int mid = low + (high - low) / 2;
            
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            } else if (arr[mid] < arr[high]) {
                high = mid;
            } else {
                // Handle the case when arr[mid] == arr[high]
                high--;
            }
        }
        return arr[low];
    }

    int minNumber(int arr[], int low, int high) {
        return solve(arr, low, high);
    }
};




//{ Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends