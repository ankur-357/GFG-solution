//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
int maxSumBS(int arr[] , int n );

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<maxSumBS(a,n)<<endl;
		
	}
}
// } Driver Code Ends


int maxSumBS(int arr[] , int n )
{
   
    vector<int>dp1(n),dp2(n);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
               sum=max(sum,dp1[j]);
            }
        }
        dp1[i]=arr[i]+sum;
    }
    for(int i=n-1;i>=0;i--){
        int sum=0;
        for(int j=n-1;j>i;j--){
            if(arr[i]>arr[j]){
                sum=max(sum,dp2[j]);
            }
        }
        dp2[i]=arr[i]+sum;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dp1[i]+dp2[i]-arr[i]);
    }
    return ans;
    
}
