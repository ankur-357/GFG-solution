//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i].feet = tmp1;
	        arr[i].inches = tmp2;
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
#include<bits/stdc++.h>
/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(struct Height arr[], int n)
{
    int maxi = INT_MIN;
    
    // Code here
    for(int i=0; i<n;i++){
        int feet= arr[i].feet;
        int inches = arr[i].inches;
        int sum = feet*12+inches;
        maxi = max(sum, maxi);
    }
    return maxi;
}