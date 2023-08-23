//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    string str = to_string(n);
    for (auto &charRef : str) { // Use a reference to the character
        if (charRef == '0') {
            charRef = '5';
        }
    }
    return stoi(str);
}
