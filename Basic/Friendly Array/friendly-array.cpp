//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
   {   
       sort(arr, arr+n);
       int sum = 0;
       for(int i = 0; i<n; i++){
           if(i == 0){
               sum += abs(arr[i+1]-arr[i]);
           }else if(i == n-1){
               sum += abs(arr[i]-arr[i-1]);
           }else{
               sum += min(abs(arr[i]-arr[i-1]), abs(arr[i+1]-arr[i]));
           }
       }
       return sum;
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
		Solution ob;	
		cout<<ob.sumOfMinAbsDifferences(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends