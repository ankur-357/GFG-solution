//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    // code here
	    vector<int> ans;
	    int cnt1=0;
	    int cnt2=0;
	    
	    for(int i=0; i<n;i++){
	        if(arr[i]<x){
	            cnt1++;
	           // cout<< arr[i]<< "* ";
	        }else if(arr[i]>x){
	            cnt2++;
	           // cout<< arr[i]<< "/ ";
	        }else{
	            cnt1++;
	            cnt2++;
	        }
	    }
	    ans.push_back(cnt1);
	    ans.push_back(cnt2);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends