//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        vector<int>v;
        
        sort(a, a+n);
        
        int limit;
        
        if(n%2 ==0){
            limit = n/2;
        }
        else if(n%2 == 1){
            limit = n/2 + 1;
        }
        
        for(int i=0; i<limit; i++){
            
            v.push_back(a[i]);
            v.push_back(a[n-1-i]);
        
        }
        
        for(int i=0; i<n; i++){
            answer[i] = v[i]; 
        }
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
		int i, a[n+5], answer[n+5]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.Rearrange(a, n, answer);
		
		for(i=0;i<n;i++)
		cout<<answer[i]<<" ";
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends