//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Function to calculate the sum
long long sum(int a[], int n);


// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       	cout << sum(arr, n)<<endl; 
    }

	return 0;
}

// } Driver Code Ends


long long sum( int a[], int n ) {
    unordered_map< int, int > m;
	long long r{}, p{};
	for ( int i{}; i < n; ++i )
		r += i * a[ i ] - p - m[ a[ i ] - 1 ] + m[ a[ i ] + 1 ],
		p += a[ i ], m[ a[ i ] ]++;
	return r;
}
