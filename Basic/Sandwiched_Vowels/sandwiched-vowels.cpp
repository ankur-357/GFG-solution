//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:

    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
    string Sandwiched_Vowel(std::string s) {
        int n = s.length();
        string result = "";
    
        for (int i = 0; i < n; i++) {
            result += s[i];
            if (i >= 1 && i < n - 1 && isVowel(s[i]) && !isVowel(s[i - 1]) && !isVowel(s[i + 1])) {
                result.pop_back(); // Remove the last added vowel character
            }
        }
    
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends