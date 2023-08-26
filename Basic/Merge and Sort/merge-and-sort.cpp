//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        // Write your code here
        int i = 0, j = 0, k = 0;

        // Merge and sort the arrays
        while (i < n && j < m) {
            if (a[i] < b[j]) {
                answer[k++] = a[i++];
            } else if (b[j] < a[i]) {
                answer[k++] = b[j++];
            } else {
                // If both elements are equal, add one to the answer and move both pointers
                answer[k++] = a[i++];
                ++j;
            }
        }

        // Add remaining elements from array 'a', if any
        while (i < n) {
            answer[k++] = a[i++];
        }

        // Add remaining elements from array 'b', if any
        while (j < m) {
            answer[k++] = b[j++];
        }

        // Remove duplicates from the merged array
        sort(answer, answer+k);
        int newSize = unique(answer, answer + k) - answer;

        return newSize;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}
// } Driver Code Ends