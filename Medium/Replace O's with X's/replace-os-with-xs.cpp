//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    void dfs(vector<vector<char>>& board, int x, int y, vector<vector<int>>& vis, int dx[],int dy[],int n, int m){
        for (int i=0; i<4; i++){
            int nr= x+ dx[i];
            int nc= y+ dy[i];
            if (nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && board[nr][nc]=='O'){
                vis[nr][nc]=1;
                dfs(board,nr,nc,vis,dx,dy,n,m);
            }
        }
    }
    void bfs(vector<vector<char>>& board, int x, int y, vector<vector<int>>& vis, int dx[],int dy[],int n, int m){
        queue<pair<int, int>>q;
        q.push({x, y});
        vis[x][y] = 1;
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
        for (int i=0; i<4; i++){
            int nr= row+ dx[i];
            int nc= col+ dy[i];
            if (nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && board[nr][nc]=='O'){
                vis[nr][nc]=1;
                q.push({nr,nc});
            }
        }
        }
    }    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> &board){
        vector<vector<int>> vis(n,vector<int>(m,0));
        int dx[]= {0,1,0,-1};
        int dy[]= {1,0,-1,0};
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (i==0 || j==0 || i==(n-1) || j==(m-1)){
                    if (board[i][j]=='O' && !vis[i][j]){
                        vis[i][j]=1;
                        dfs(board,i,j,vis,dx,dy,n,m);
                    }
                }
            }
        }
        
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (board[i][j]=='O' && !vis[i][j])
                board[i][j]='X';
            }
        }
        return board;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends