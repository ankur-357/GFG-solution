//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    void dfs(int x,int y,vector<vector<char>>& grid){
        
        grid[x][y] = '0';
        
        int n = grid.size();
        int m = grid[0].size();
        
        int dx[8] = {-1,-1,-1,0,0,+1,+1,+1};
        int dy[8] = {-1,0,+1,-1,+1,-1,0,+1};
        
        for(int i=0;i<8;i++){
            
            int row = x + dx[i];
            int col = y + dy[i];
            
            if((row>=0 and row<n) and (col>=0 and col<m) and grid[row][col]=='1'){
                dfs(row,col,grid);
            }
        }
        
    }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count = 0;
        
        int n = grid.size();
        int m = grid[0].size();

        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(i,j,grid);
                }
                
            }
        }
        
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends