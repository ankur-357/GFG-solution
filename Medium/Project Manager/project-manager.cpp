//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


// } Driver Code Ends

// } Driver Code Ends
class Solution{
    public:
// } Driver Code Ends
class Solution{
    public:
    int minTime(vector<pair<int, int>> &dependency, int duration[], int n, int m) {
        //     Write your code here
        int indegree[n]={0};
        int start[n]={0};
        int count=0;
        int ans=0;
        vector<int>adj[n];
        for(auto it : dependency){
            adj[it.first].push_back(it.second);
            indegree[it.second]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            count++;
            ans=max(ans,start[node]+duration[node]);
            for(auto it : adj[node]){
                start[it]=max(start[it],start[node]+duration[node]);
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(count==n){
            return ans;
        }
        return -1;
       
    }
};
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y;
        cin >> n >> m;
        int duration[n + 5];
        vector<pair<int, int>> dependency;
        for (int i = 0; i < n; i++) cin >> duration[i];
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            dependency.push_back({x, y});
        }
        Solution obj;
        cout << obj.minTime(dependency, duration, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends