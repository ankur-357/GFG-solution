//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int minMoves(int arr[], int n) 
    {
        int count =0;
        int current_value = n;
        for(int i = n-1 ;i>=0;i--){
            if(arr[i]==current_value){
                count++;
                current_value--;
            }
        }
        return n-count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n;
      scanf("%d",&n);
      int arr[n]; 
      for(int i = 0; i < n; i++)
      scanf("%d",&arr[i]);
      Solution ob;
      cout << ob.minMoves(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends