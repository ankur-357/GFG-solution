//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#include <vector>

class Solution
{
public:
void dfs(int i, int j, vector<vector<int>> grid, vector<int> &curr, vector<vector<int>> &ans) {
        curr.push_back(grid[i][j]);
        int n = grid.size();
        int m = grid[0].size();
        if (i == n-1 && j == m-1) ans.push_back(curr);
        
        if (i+1 < n) {
            dfs(i+1, j, grid, curr, ans);
            curr.pop_back();
        }
        
        if (j+1 < m) {
            dfs(i, j+1, grid, curr, ans);
            curr.pop_back();
        }
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<vector<int>> ans;
        vector<int> curr;
        dfs(0, 0, grid, curr, ans);
        return ans;
    }
 
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends