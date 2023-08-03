//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
#include<bits/stdc++.h>
class Solution {
  public:
  #define MIN -100000000
    long long int findMaxValue(long long int arr[], int n) {
        if (n < 4)
    {
        return -1;
    }
 
    // We create 4 DP tables
   long long int table1[n + 1], table2[n], table3[n - 1], table4[n - 2];
 
    // Initialize all the tables to MIN
    for (int i=0; i<=n; i++)
        table1[i] = table2[i] = table3[i] = table4[i] =  MIN;
 
    // table1[] stores the maximum value of arr[l]
    for (int i = n - 1; i >= 0; i--)
        table1[i] = max(table1[i + 1], arr[i]);
 
    // table2[] stores the maximum value of arr[l] - arr[k]
    for (int i = n - 2; i >= 0; i--)
        table2[i] = max(table2[i + 1], table1[i + 1] - arr[i]);
 
    // table3[] stores the maximum value of arr[l] - arr[k]
    // + arr[j]
    for (int i = n - 3; i >= 0; i--)
        table3[i] = max(table3[i + 1], table2[i + 1] + arr[i]);
 
    // table4[] stores the maximum value of arr[l] - arr[k]
    // + arr[j] - arr[i]
    for (int i = n - 4; i >= 0; i--)
        table4[i] = max(table4[i + 1], table3[i + 1] - arr[i]);
 
    /*for (int i = 0; i < n + 1; i++)
        cout << table1[i] << " " ;
    cout << endl;
 
    for (int i = 0; i < n; i++)
        cout << table2[i] << " " ;
    cout << endl;
 
    for (int i = 0; i < n - 1; i++)
        cout << table3[i] << " " ;
    cout << endl;
 
    for (int i = 0; i < n - 2; i++)
        cout << table4[i] << " " ;
    cout << endl;
    */
 
    // maximum value would be present in table4[0]
    return table4[0];
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.findMaxValue(arr, n) << endl;
    }
    return (0);
}

// } Driver Code Ends