//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool dfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>>& grid){
        
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || vis[i][j]==1 || grid[i][j]==0){
            return false;
        }
       
       
       if(grid[i][j]==2){
           return true;
       }
       
       vis[i][j]=1;
       
       int dx[4]={-1,0,1,0};
       int dy[4]={0,1,0,-1};
       
       for(int t=0;t<4;t++){
           int nexti=i+dx[t];
           int nextj=j+dy[t];
           if(dfs(nexti,nextj,vis,grid)==true){
               return true;
           }
       }
       return false;
       
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        /* 
        1->source
        2->destination
        3->blank
        0->wall
        */
        int row=grid.size(),col=grid[0].size();
        
        vector<vector<int>> vis(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    return dfs(i,j,vis,grid);
                }
            }
        }
        
           
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends