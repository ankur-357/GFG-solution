//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> src,pair<int, int> dest) {
        
        // if source == dest return 0 we have already reached
        if(src.first==dest.first and src.second==dest.second)
        {
            return 0;
        }
        
        // to maintain the cell and distance required to reach the cell
        queue<pair<int,pair<int,int>>>q;
        
        // get the dimensions of the grid 
        int n=grid.size();
        int m=grid[0].size();
        
        // resultant 2d vector to store the distance required to reach the cell from the source
        // initially keep all the cell distances to inifinite
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        
        // source cell has 0 as distance
        dist[src.first][src.second]=0;
        
        // start your journey from the start
        q.push({0,{src.first,src.second}});
        
        // from each cell we have four directions to travel 
        // to maintain code more readable and easy to understand and avoid code redundancy
        // maintain the delta row,detla column -> keeps track of the possible moves from each cell
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        
        // we will travel until the traversal ends
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            
            int dis=it.first;
            
            int row=it.second.first;
            int col=it.second.second;
            
            // from each cell we have four directions to travel 
            for(int i=0;i<4;i++)
            {
                int newrow=row+dr[i];
                int newcol=col+dc[i];
                
                // check the validity of the new cell we arrive
                // if so check the cell==1 or not 
                // if so check current cell value > dis+1 of our new one
                // if so update else no changes required
                
                if(newrow>=0 and newrow<n and newcol>=0 and newcol<m and grid[newrow][newcol]==1 and dist[newrow][newcol]>(dis+1))
                {
                    dist[newrow][newcol]=1+dis;
                    if(newrow==dest.first and newcol==dest.second)
                    {
                        return 1+dis;
                    }
                    
                    q.push({1+dis,{newrow,newcol}});
                }
            }
        }
        return -1;   
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

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends