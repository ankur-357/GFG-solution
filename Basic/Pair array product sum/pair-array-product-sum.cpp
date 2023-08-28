//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// C++ implementation of efficient approach
// to count valid pairs.
class Solution
{
    public:

// returns the number of valid pairs
int CountPairs (int arr[], int n)
{
	// traversing the array, counting the
	// number of 2s and greater than 2
	// in array
	int twoCount = 0, twoGrCount = 0;
	for (int i = 0; i<n; i++)
	{
		if (arr[i] == 2)
			twoCount++;
		else if (arr[i] > 2)
			twoGrCount++;
	}
	return twoCount*twoGrCount +
		(twoGrCount*(twoGrCount-1))/2;
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
	  int arr[n];
	  for(int i=0;i<n;i++)
	  cin>>arr[i];
	  Solution ob;
	  cout <<ob.CountPairs(arr, n)<<endl;
	}
	return 0;
}

// } Driver Code Ends