//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void first_occurence(vector<int>arr,vector<int> &p, int n, int target){
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(arr[mid]==target){
                ans = mid;
                high = mid-1;
            }else if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if(ans==-1){
            return;
        }else
            p.push_back(ans);
    }
    void last_occurence(vector<int>arr,vector<int> &p, int n, int target){
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(arr[mid]==target){
                ans = mid;
                low = mid+1;
            }else if(arr[mid]<target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        if(ans==-1){
            return;
        }else
            p.push_back(ans);
    }

    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int> p,q;
        first_occurence(arr,p,n,x);
        last_occurence(arr,p,n,x);
        if(p.size()!=0)
        return p;
        else {
            q.push_back(-1);
            return q;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends