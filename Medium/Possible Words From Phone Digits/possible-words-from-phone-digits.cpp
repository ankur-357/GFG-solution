//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int a[], int N,  map<int,string> mp, vector<string> &ans, string temp, int ind)
    {
        if(temp.size() == N)
        {
            ans.push_back(temp);
            return;
        }
        for(int i = 0; i<mp[a[ind]].size(); i++)
        {
            string temp1 = temp;
            temp1.push_back(mp[a[ind]][i]);
            solve(a,N,mp,ans,temp1,ind+1);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        map<int,string> mp;
        mp[1] = "";
        mp[2] ="abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        vector<string> ans;
        solve(a,N,mp,ans,"",0);
        return ans;
    }
};




//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends