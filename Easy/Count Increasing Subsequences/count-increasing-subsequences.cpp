//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    // Function To Count all the sub-sequences
    // possible in which digit is greater than
    // all previous digits arr[] is array of n
    // digits
    unsigned long long int countSub(int arr[], int n)
    {
        // count[] array is used to store all sub-
        // sequences possible using that digit
        // count[] array covers all the digit
        // from 0 to 9
        unsigned long long int count[10] = {0};
    
        // scan each digit in arr[]
        for (int i=0; i<n; i++)
        {
            // count all possible sub-sequences by
            // the digits less than arr[i] digit
            for (int j=arr[i]-1; j>=0; j--)
                count[arr[i]] += count[j];
    
            // store sum of all sub-sequences plus
            // 1 in count[] array
            count[arr[i]]++;
        }
    
        // now sum up the all sequences possible in
        // count[] array
        unsigned long long int result = 0;
        for (unsigned long long int i=0; i<10; i++)
            result += count[i];
    
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(unsigned long long int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.countSub(a,n)<<endl;
    }
}

// } Driver Code Ends