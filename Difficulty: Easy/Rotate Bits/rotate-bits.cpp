//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
vector <int> rotate (int n, int d)
        {
            int k = n, m = n;
            for(int i=1; i<=d; i++){
                k = k<<1;
                if((k>>16)&1){
                    k = k&(65535);
                    k++;
                }
                if(m&1){
                    m = m | 65536;
                }
                m = m>>1;
            }
            vector<int> ans = {k,m};
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends