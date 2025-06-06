//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;
        int ans=0;
        
        st.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                st.push(i);
            else{
                if(st.size())
                    st.pop();
                if(st.size())
                    ans=max(ans,i-st.top());
                else
                    st.push(i);
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
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends