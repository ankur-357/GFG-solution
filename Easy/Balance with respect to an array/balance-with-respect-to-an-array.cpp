//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
int Ceil(int *arr, int x, int n) {
    int low = 0;
    int high = n - 1;
    int ceilValue = -1;  // Initialize ceilValue to -1 as there may not be a ceiling

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If x is less than or equal to the element at mid, update ceilValue and search in the left half.
        if (arr[mid] >= x) {
            ceilValue = arr[mid];
            high = mid - 1;
        }
        // If x is greater than the element at mid, search in the right half.
        else {
            low = mid + 1;
        }
    }

    return ceilValue;
}
int Floor(int *arr, int x,int n) {
    int low = 0;
    int high = n - 1;
    int floorValue = -1;  // Initialize floorValue to -1 as there may not be a floor

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If x is greater than or equal to the element at mid, update floorValue and search in the right half.
        if (arr[mid] <= x) {
            floorValue = arr[mid];
            low = mid + 1;
        }
        // If x is less than the element at mid, search in the left half.
        else {
            high = mid - 1;
        }
    }

    return floorValue;
}
    string isBalanced(int a[],int n,int x)
    {
        int a1 = abs(x-Floor(a,x,n));
        int a2 = abs(Ceil(a,x,n)-x);
        return (a1 == a2)? "Balanced": "Not Balanced";
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>x;
	Solution ob;
	cout <<ob.isBalanced(arr, n, x)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends