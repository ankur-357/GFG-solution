//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


// Binary search function
bool binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return true;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

// Function to find if there exists a pair with the given difference
bool findPair(int arr[], int L, int N) {
    // Sort the array
    sort(arr, arr + L);

    // Iterate through the sorted array
    for (int i = 0; i < L - 1; i++) {
        // Use binary search to find the index of the element with the difference N
        if (binarySearch(arr, i + 1, L - 1, arr[i] + N)) {
            return true;
        }
    }

    return false;
}
