//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        vector<bool> v1(n, true);
        vector<int> v2(n,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(M[i][j] == 1){
                    v1[i]=false;
                    v2[j]++;
                }
            }
        }
        /*for(int i=0; i<n; i++){
            cout<<"\t"<<v1[i]<<"\t"<<v2[i]<<endl;
        }*/
        for(int i=0; i<n; i++){
            if(v1[i] && v2[i] == n-1){
                return i;
            }
        }
        return -1;
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
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends