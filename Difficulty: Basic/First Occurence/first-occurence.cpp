//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here

    int n = txt.size();
    int m = pat.size();
    //GeeksForGeeks //For
    // Loop through the txt string to find the pattern
    for (int i = 0; i <= n; ++i) {
        int j;

        // Check if pat matches txt from index i
        for (j = 0; j < m; ++j) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }

        // If the full pattern matched
        if (j == m) {
            return i;
        }
    }
    return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        string b;

        cin >> a;
        cin >> b;
        Solution ob;
        cout << ob.firstOccurence(a, b) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends