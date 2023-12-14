//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	int findMaxSubarraySum(long long arr[], int n, long long sum)
    {
        // Your code goes here
        int i=0,j=0;
        long long s=0,ans=0;
        while(j<n){
            s+=arr[j];
            if(s>sum){
                while(i<n && s>sum){
                    s-=arr[i];
                    i++;
                }
            }
            ans=max(ans,s);//8 
            j++;
        }
        return ans;
    } 
};
	  



//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        long long sum;
        cin >> sum;
        

        Solution ob;
		cout << ob.findMaxSubarraySum(a, n, sum);
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends