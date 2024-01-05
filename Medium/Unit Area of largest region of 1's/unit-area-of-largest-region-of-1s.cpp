//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int bfs(vector<vector<int>>& grid, vector<vector<bool>> &vis, int r, int c, int m, int n){
        queue<pair<int, int>> q;
        q.push({r, c});
        int cnt = 1;
        vis[r][c] = true;
        int drow[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dcol[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0; i< 8; i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if(nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && vis[nrow][ncol] == false && grid[nrow][ncol] == 1){
                    vis[nrow][ncol] = true;
                    q.push({nrow, ncol});
                    cnt++;
                }
            }
        }
        return cnt;
    }
    
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;

        vector<vector<bool>> vis(m, vector<bool> (n, false));

        for(int i = 0; i< m; i++){
            for(int j = 0; j< n; j++){
                if(grid[i][j] != 0){
                    int temp = bfs(grid, vis, i, j, m, n);
                    ans = max(ans, temp);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends