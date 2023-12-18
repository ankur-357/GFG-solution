//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
    int findWinner(int n, int x, int y)
	{
		int a[n+1];
		memset(a , 0 , sizeof(a));
		if(x <= n) a[x] = 1;
		if(y <= n) a[y] = 1;
		a[1] = 1;
		for(int i=2; i<=n;i++)
		{
		    int q,w,e;
		    q = w = e = 1;
		    q = a[i-1];
		    if(i>=x) w = a[i-x];
		    if(i>=y) e = a[i-y];
		    
		    //If A won in all previous q,w,e
		    //then now B will win. 
		    if(q & w & e) a[i] = 0;
		    else a[i] = 1;
		}
		return a[n];
	}

};
	

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
       	int n, x, y;
       	cin >> n >> x >> y;

       

        Solution ob;
        cout << ob.findWinner(n, x, y);
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends