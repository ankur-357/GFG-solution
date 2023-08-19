//{ Driver Code Starts
 
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
 #include<bits/stdc++.h>
class Solution{ 
public:
    string onesComplement(string S,int N){
        //code here
        string str="";
        for(int i=0; i<S.length(); i++){
            if(S.at(i)=='1'){
                str += "0";
            }
            else str+="1";
        }
        return str;
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
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}
// } Driver Code Ends