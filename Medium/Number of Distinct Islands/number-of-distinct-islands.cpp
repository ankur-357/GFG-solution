//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  //dfs traversal
void dfs(int row, int col, vector<vector<int>>& grid, vector<vector<int>>& vis, vector<pair<int,int>>& vec, int row0, int col0){
    vis[row][col]=1;
    int n=grid.size();
    int m=grid[0].size();
    
    int delrow[]={-1,0,+1,0};
    int delcol[]={0,-1,0,+1};
    
    vec.push_back({row-row0,col-col0});
    
    for(int i=0; i<4; i++)
        {
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow, ncol, grid, vis, vec, row0, col0);
            }
        }
  }
  //bfs traversal
 void bfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis, vector<pair<int,int>>& vec, int row0, int col0){
      vis[i][j]=1;
      int n=grid.size();
      int m=grid[0].size();
      queue<pair<int,int>> q;
      q.push({i,j});
      vec.push_back({i-row0,j-col0});
      
      int delrow[]={-1,0,+1,0};
      int delcol[]={0,-1,0,+1};
      while(!q.empty()){
          int row=q.front().first;
          int col=q.front().second;
          q.pop();
          
        for(int i=0; i<4; i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                vec.push_back({nrow-row0,ncol-col0});
                q.push({nrow,ncol});
                vis[nrow][ncol]=1;
            }
        }
    }
  }
  
int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        set<vector<pair<int,int>>> st;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]==1){
                    vector<pair<int,int>> vec;
                    //dfs(i,j,grid,vis,vec,i,j);
                    bfs(i,j,grid,vis,vec,i,j);
                    st.insert(vec);
                }
            }
        }
        return st.size();
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends