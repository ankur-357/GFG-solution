//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long int countStr(long long int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        cout << countStr(n) << endl;
    }
return 0;
}
// } Driver Code Ends


const int mod = 1e9 + 7;

long long int dp[100005][3];

long long int comb(int n, int k) {

    if(k > n) return 0;

    if(k == 0 or k == n) return 1;

    return dp[n][k] ? dp[n][k] :

                dp[n][k] = comb(n-1, k) + comb(n-1, k-1);
}

long long int countStr(long long int n) {

    // b c    no. of ways

    // 0 0 => 1

    // 0 1 => n

    // 0 2 => nC2

    // 1 0 => n

    // 1 1 => n(n-1)

    // 1 2 => (n)* (n-1)C2

    long long a = comb( n,2 );

    long long int b = 1 + n + a + n + 2*a + a*(n-2);

    return b;
}
