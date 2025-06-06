//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    private:
    // void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>> &grid){
    //     vis[row][col]=1;
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     int delrow[] = {-1, 0 , +1, 0};
    //     int delcol[] = {0, +1, 0, -1};
    //     for(int i=0; i<4; i++){
    //         int nrow = row + delrow[i];
    //         int ncol = col + delcol[i];
    //         if(nrow>=0 && nrow < n && ncol>=0 && ncol< m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
    //             dfs(nrow,ncol,vis,grid);
    //             vis[nrow][ncol] = 1;
    //         }
    //     }
    // }
    void bfs(int i,int j,vector<vector<int>> &vis,vector<vector<int>> &grid){
        queue<pair<int,int>> q;
        q.push({i,j});
        vis[i][j]=1;
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1, 0 , +1, 0};
        int delcol[] = {0, +1, 0, -1};
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if(nrow>=0 && nrow < n && ncol>=0 && ncol< m && grid[nrow][ncol]==1 && !vis[nrow][ncol]){
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
    }
public:
    int numberOfEnclaves(vector<vector<int>>& grid) {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis (n, vector<int>(m, 0));
        for(int i = 0; i<n;i++){
            for(int j = 0; j<m; j++){
                if(i==0 || i==n-1 || j==m-1 || j==0){
                    if(grid[i][j]==1){
                        //dfs(i,j,vis,grid);
                        bfs(i,j,vis,grid);
                    }
                }
            }
        }
        
        for(int i=0; i<n;i++){
            for(int j=0;j<m; j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    count++;
                }
            }
        }
        return count;        
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
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends