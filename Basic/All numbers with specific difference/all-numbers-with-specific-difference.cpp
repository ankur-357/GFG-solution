//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool fun(long long ele, long long d)
    {
        long long sum=0;
        long long temp=ele;
        while(ele)
        {
            sum=sum+ele%10;
            ele=ele/10;
        }
        if(temp-sum>=d)
        return true;
        else
        return false;
    }
    long long getCount(long long n , long long d) 
    {
        long long low=0;
        long long high=n;
        long long mid=0;
        while(low<=high)
        {
           
            mid=low+(high-low)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
            if(fun(mid,d)==true)
            {
               // cout<<"true"<<endl;
                high=mid-1;
            }
            else
            {
                //cout<<"false"<<endl;
                low=mid+1;
            }
        }
        
        //cout<<low<<" "<<high<<endl;
        return n-low+1;
    }


};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends