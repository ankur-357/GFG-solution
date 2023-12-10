//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here
    std::string reversed = "";
    int length = s.length();

    std::vector<int> vis(256, -1);  // Assuming ASCII characters

    for (int i = length - 1; i >= 0; --i) {
        if (s[i] == ' ' || vis[static_cast<unsigned char>(s[i])] != -1) {
            continue;
        }
        reversed += s[i];
        vis[static_cast<unsigned char>(s[i])] = i;  // Mark the character as visited
    }

    return reversed;
}