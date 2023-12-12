//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
int maxSumPairWithDifferenceLessThanK(int arr[], int n, int K)
    {
        // Your code goes here 
        sort(arr,arr+n);
        int i =n-1;
        int j = n-2;
        int sum =0;
        while(i>=0 and j>=0){
            if(arr[i]-arr[j] < K){
                sum+= arr[i]+arr[j];
                i=j-1;
                j=i-1;
            }
            else{
                i--;
                j--;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		int arr[N];
		for(int i=0;i<N;i++)
		cin>>arr[i];

		int K;
		cin>>K;
        Solution ob;
		cout<<ob.maxSumPairWithDifferenceLessThanK(arr,N,K)<<endl;
	}
	return 0;
}

// } Driver Code Ends