//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
public:
    string binaryPalindrome(int n,int k)
    {
        vector<int>ans(n,0);
        queue<int>Q;
        Q.push(0);
        int N = n;
        int visited[N]={0};
        // visited[0] = 1;
        while(!Q.empty()){
            int index = Q.front();
            // cout<<index<<" ";
            visited[index] = 1;
            Q.pop();
            ans[index] = 1;
            int ind1 = N-1-index;
            if(ind1>=0 && !visited[ind1]){
                Q.push(ind1);
            }
            for(int i = index+k; i<N;i+=k){
                if(!visited[i]){
                    Q.push(i);
                }
            }
            
        }
        string result;
        for(int i = 0; i<n; i++){
            result+=to_string(ans[i]);
        }
        return result;
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        Solution obj;
        cout << obj.binaryPalindrome(n,k) << endl; 
    }
    return 0;
}

// } Driver Code Ends