//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  private: 
    bool dfs(int node, int parent, int vis[], vector<int> adj[]) {
        vis[node] = 1; 
        // visit adjacent nodes
        for(auto it: adj[node]) {
            // unvisited adjacent node
            if(!vis[it]) {
                if(dfs(it, node, vis, adj) == true) 
                    return true; 
            }
            // visited node but not a parent node
            else if(it != parent) return true; 
        }
        return false; 
    }
    bool bfs(int node, int parent, int vis[], vector<int> adj[]) {
        vis[node] = 1; 
        queue<pair<int, int>> q;
        q.push({node, parent});
        // visit adjacent nodes
        while(!q.empty()){
            int row = q.front().first;  // node
            int col = q.front().second; //parent
        q.pop();
        for(auto it: adj[row]) {
            // unvisited adjacent node
            if(!vis[it]) {
                vis[it] = 1;
                q.push({it, row});
            }
            // visited node but not a parent node
            else if(it != col) return true; 
        }
        }
        return false; 
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       int vis[V] = {0}; 
       // for graph with connected components 
       for(int i = 0;i<V;i++) {
           if(!vis[i]) {
               if(dfs(i, -1, vis, adj) == true) return true; 
               //if(bfs(i, -1, vis, adj) == true) return true; 
           }
       }
       return false; 
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends