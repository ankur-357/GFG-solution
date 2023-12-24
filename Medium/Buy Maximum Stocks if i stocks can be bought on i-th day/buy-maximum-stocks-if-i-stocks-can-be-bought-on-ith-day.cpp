//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.push_back({price[i],i+1});
        }
        sort(a.begin(),a.end());
        int count = 0;
        int p=0;
        int s;
        while(p < n && k >=a[p].first){
            s=floor(k/a[p].first);
            if(s>a[p].second){
                count+=a[p].second;
                k-=(a[p].first*a[p].second);
            }
            else{
                count+=s;
                k-=s*a[p].first;
            }
            p++;
          
        }
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends