//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    int newNumber2 = n*2;
	    int newNumber3 = n*3;
	    
	    string newn =to_string(n)+to_string(newNumber2)+to_string(newNumber3);
	    
	   int z=123456789;
       string d=to_string(z);
       
        sort(newn.begin(),newn.end());
        
        if(newn==d) return 1;
        else return 0;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends