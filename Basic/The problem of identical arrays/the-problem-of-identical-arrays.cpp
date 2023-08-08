//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int check(int *a, int *b, int n);


int main() {
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        int i;
        for(i = 0; i < n; i++){
            cin>> a[i];
        }
        for(i = 0; i < n; i++){
            cin>> b[i];
        }
        cout << check(a, b, n) << endl;
        
    }
	return 0;
}
// } Driver Code Ends


bool bin_search(int arr[], int target, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid potential overflow
        if (arr[mid] == target) return true;
        if (arr[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return false;
}

int check(int *arr, int *brr, int n) {
    sort(arr, arr + n);
    sort(brr, brr + n); // Sort array b before performing binary search

    for (int i = 0; i < n; i++) {
        if(!(arr[i] == brr[i])){
            return 0;
        }
    }
    return 1;
}