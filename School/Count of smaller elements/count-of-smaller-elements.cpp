//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends


int countOfElements(int arr[], int n, int x) 
{
    int low=0,high=n-1;
    int mid;
    int ans = n;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]>x) {
            high = mid-1;
            ans = mid;
        }else if(arr[mid]==x){
            low = mid+1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;
}