//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
bool hamPath(int node , vector<int>& vis , vector<int>& nodes , vector<int> adj[] , int n){
        
        vis[node] = 1;
        nodes.push_back(node);
        
        for(auto it : adj[node]){
            
            if(!vis[it]){
                if(hamPath(it , vis , nodes , adj , n))
                return true;
            }
        }
        
        if(nodes.size() == n)
        return true;
        
        vis[node] = 0;
        nodes.pop_back();
        return false;
    }
    
    bool check(int n , int m , vector<vector<int>> edges){
       
        vector<int> vis(n+1 , 0);
        vector<int> adj[n+1];
        vector<int> nodes;
        
        for(auto it : edges){
            
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        for(int i=1 ; i<=n ; i++){
            
            if(!vis[i]){
                if(hamPath(i , vis , nodes , adj , n))
                return 1;
            }
        }
        
        return 0;
    }
};
 

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
    	int N,M,X,Y;
    	cin>>N>>M;
    	vector<vector<int>> Edges;
    	for(int i=0;i<M;i++)
    	{
    		cin>>X>>Y;
    		Edges.push_back({X,Y});
    	}
    	Solution obj;
    	if(obj.check(N,M,Edges)){
    		cout<<"1"<<endl;
    	}
    	else
    	cout<<"0"<<endl;
	}
}
// } Driver Code Ends