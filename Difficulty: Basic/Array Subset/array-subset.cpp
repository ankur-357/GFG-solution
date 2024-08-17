//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    
    for(int i=0; i<m; i++){
        bool flag = false;
        int j = 0;
        while(j<n){
            if(a2[i]==a1[j]){
                //cout << a1[j] << " "<< a2[i] << endl;
                a1[j] = 1e9+7;
                flag = true;
                break;
            }
            j++;
        }
        //cout << i << endl;
        if(flag == false){
            //cout << flag << endl;
            return "No";
        }
    }
    return "Yes";
}