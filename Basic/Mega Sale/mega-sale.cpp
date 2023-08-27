//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long maxProfit(int a[], int n, int m);

int main()
 {
     ll t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         
         cout<< maxProfit(a, n, m) <<endl;
     }
	
	return 0;
}


// } Driver Code Ends


long long maxProfit(int a[], int n, int m)
{
    // Your code goes here   
    sort(a,a+n);
    long long sum = 0;
    int count = 0;
    for(int i=0;i<min(m,n);i++){
        if(a[i] <= 0){
            sum = sum + a[i];
            count++;
        }
    }
    sum = sum * -1;
    if(count == 0 && m>0){
        
        return 0;
    }
    return sum;
    
}