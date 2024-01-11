//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
   string isKSortedArray(int arr[], int n, int k)
    {
        
        unordered_map<int,int>m;
        for(int i = 0; i<n; i++)
        {
            m[arr[i]] = i;
        }
        
        sort(arr,arr+n);
        
        for(int i = 0; i<n; i++)
        {
            if( abs ( m[arr[i]] - i ) > k)
                return "No";
        }
        
        return "Yes";
        
        
        
        /*
        vector<int>a ;
        for(int i = 0; i<n; i++)
            a.push_back(arr[i]);
        
        sort(a.begin(),a.end());
        
        for(int i = 0; i<n; i++)
        {
            int key = arr[i];
            
            int start = 0, end = n - 1;
            while(start <= end)
            {
                int mid = (start + end)/2;
                
                if(a[mid] == key)
                {
                    if( abs(i - mid) > k )
                        return "No";
                    else 
                        break;
                }
                else if(a[mid] < key)
                {
                    start = mid + 1;
                }
                else
                    end = mid - 1;
            }
        }
        
        return "Yes";
        */
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
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code EndsInput:
