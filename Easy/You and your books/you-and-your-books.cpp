//{ Driver Code Starts
#include <iostream>
#include<algorithm>
#include<cstdio>
//#include<Windows.h> 
using namespace std;  

// } Driver Code Ends

class Solution{
    public:
    /*You are requried to complete this method */
int max_Books(int a[], int n, int k)
{
    int current_sum = 0;  // Current sum of consecutive stacks
    int max_sum = 0;      // Maximum sum of consecutive stacks

    for (int i = 0; i < n; i++) {
        if (a[i] <= k) {
            current_sum += a[i];
            max_sum = max(max_sum, current_sum);
        } else {
            current_sum = 0; // Reset the current sum
        }
    }

    return max_sum;
}

};

//{ Driver Code Starts.
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	Solution ob;
  	cout<<ob.max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}


// } Driver Code Ends