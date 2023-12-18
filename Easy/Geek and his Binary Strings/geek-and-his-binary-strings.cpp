//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
 int prefixStrings(int N)
{
    vector<long long> t(N+1,0);
    t[0]=t[1]=1;
    int mod=1000000007;
    for(int i=2;i<=N;i++){
        for(int j=0;j<i;j++){
            t[i]+=((t[j]%mod)*(t[i-j-1]%mod))%mod;
        }
    }
    return t[N]%mod;
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
       	cin >> n;

       

        Solution ob;
        cout << ob.prefixStrings(n);
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends