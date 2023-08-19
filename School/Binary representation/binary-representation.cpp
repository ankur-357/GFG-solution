//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

#include<bits/stdc++.h>
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        string binary="000000000000000000000000000000";
    int i=29;
    while(N)
    {
        if(N&1)
        binary[i]='1';
        i--;
        N=N>>1;
    }
    return binary;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends