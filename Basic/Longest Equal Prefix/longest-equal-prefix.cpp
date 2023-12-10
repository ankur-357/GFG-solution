//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int findIndex(int arr[], int X, int Y, int n);


int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		cout<<findIndex(a,x,y,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends



int findIndex(int arr[], int x, int y, int n)
{
    int countx = 0,county = 0;
    int index = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x) countx++;
        if(arr[i] == y) county++;
        
        if(countx == county && countx != 0)
            index = i;
    }
    return index;
}