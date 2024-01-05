//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool dfs(int row ,int col ,vector<vector<char>> &board ,
                string &word ,vector<vector<int>> &vis ,int ind){
                    
        vis[row][col] = 1;
        ind++;
        int n = board.size();
        int m = board[0].size();
        if(ind == word.size()){
            return true;
        }
        int drow[] = {-1 ,0 ,1 ,0};
        int dcol[] = {0 ,1 ,0 ,-1};
        for(int i=0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && board[nrow][ncol] == word[ind] 
                && ind<word.size() && vis[nrow][ncol] == 0){
                if(dfs(nrow ,ncol ,board, word ,vis ,ind) == true) return true;
            }
        }
        vis[row][col] = 0;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(dfs(i ,j ,board ,word ,vis,0) == true) return true;
                }
            }
        }
        return false;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends