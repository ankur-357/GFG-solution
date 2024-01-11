//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    #define ll long long int
    bool check(ll C,ll l, ll mid){
      ll water=C;
      for(int i=1;i<=mid;i++){
          if(i>1){
              water+=l;
              if(water>C){
                  int diff=water-C;
                  water-=diff;
              }
          }
          water-=i;
          if(water<=0){
              return true;
          }
      }
      
      return false;
    }
    long long int minDaysToEmpty(long long int C, long long int l) {
        // code here
        ll s=1,e=1e5;
        ll ans;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(check(C,l,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int c, l;
        cin >> c;
        cin >> l;
        Solution ob;
        cout << ob.minDaysToEmpty(c, l) << endl;
    }
    return 0;
}

// } Driver Code Ends