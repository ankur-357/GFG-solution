//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
 auto copy=grid;
        int r=grid.size();
        pair<int,int>source,destination;
        int c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(copy[i][j]==1){
                    source={i,j};
                }
                if(copy[i][j]==2){
                    destination={i,j};
                }
                if(copy[i][j]!=0){
                    copy[i][j]=1;
                }
            }
        }
        int dx[4]={0,0,-1,1};
        int dy[4]={-1,1,0,0};
        queue<pair<int,int>>q;
        q.push(source);
        while(!q.empty()){
            auto temp=q.front();
            
            q.pop();
            if(temp==destination){
                return true;
            }
            for(int i=0;i<4;i++){
                int x=temp.first+dx[i];
                int y=temp.second+dy[i];
                if(x>=0&&x<r&&y>=0&&y<c&&copy[x][y]==1){
                    q.push({x,y});
                    copy[x][y]=0;
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