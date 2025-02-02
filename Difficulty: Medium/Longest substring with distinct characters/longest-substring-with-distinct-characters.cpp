//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        int left = 0;
        int right = 0;
        map<char, int> mp1;
        int maxi = 0;

        while (right < s.size()) {
            if (mp1[s[right]] == 0) {
                mp1[s[right]] = 1;
                maxi = max(maxi, right - left + 1);
                right++;
            } else {
                mp1[s[left]]--;
                if (mp1[s[left]] == 0) {
                    mp1.erase(s[left]);
                }
                left++;
            }
        }
        return maxi;
    }
};




//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends