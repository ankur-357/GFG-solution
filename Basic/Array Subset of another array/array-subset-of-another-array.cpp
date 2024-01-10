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



#include <algorithm>  // Include the algorithm header for std::sort
#include <unordered_map>  // Include the unordered_map header for std::unordered_map

bool binarySearch(int a[], int n, int key) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == key) {
            return true;
        } else if (a[mid] < key) {
            low = mid + 1;
        } else if (a[mid] > key) {
            high = mid - 1;
        }
    }
    return false;
}

string isSubset(int a1[], int a2[], int n, int m) {
    // Sort both arrays before using isSubset function
    std::sort(a1, a1 + n);
    std::sort(a2, a2 + m);

    // Create a frequency map for array a1
    std::unordered_map<int, int> frequencyMap;

    for (int i = 0; i < n; i++) {
        frequencyMap[a1[i]]++;
    }

    for (int i = 0; i < m; i++) {
        if (frequencyMap[a2[i]] <= 0 || !binarySearch(a1, n, a2[i])) {
            return "No";
        }
        // Decrease the frequency in the map
        frequencyMap[a2[i]]--;
    }
    return "Yes";
}
