//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
   public:
   void strangeSort (int A[], int N, int K){
       // your code here
       int k=A[K-1];
       A[K-1]=INT_MAX;
       sort(A,A+N);
       for(int i=N-1; i>K-1; i--){
           A[i]=A[i-1];
       }
       A[K-1]=k;
   }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
		int k; cin >> k;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
        Solution ob;
		ob.strangeSort (arr, n, k);
		for (int i = 0; i < n; ++i)
			cout << arr[i] << " ";
		cout << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends