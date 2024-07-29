//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        if(A.length()!=B.length()) return -1;
        unordered_map<char,int>mp;
        int n=A.length();
        int steps=0;   //Stores answer
        int j=n-1;  //Pointer for String B

        //First Pass
        for(int i=n-1;i>=0;i--){
            if(A[i]==B[j]){
                j--;
            }
            else mp[A[i]]++;
        }

       // Second Pass
        while(j>=0){
            if(mp.find(B[j])!=mp.end()){
                mp[B[j]]--;
                steps++;
                if(mp[B[j]]==0) mp.erase(B[j]);
                j--;
            }else return -1;
        }

        return steps;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends