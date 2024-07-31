//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
private:
vector<string> findNeighbors(string word, unordered_set<string>& wordList){
        vector<string> neighbors;
        for(int i = 0; i < word.size(); ++i){
            int s = word[i];
            for(char c = 'a'; c <= 'z'; ++c){
                if(word[i]==c){
                    continue;
                }
                word[i] = c;
                if(wordList.find(word) != wordList.end())
                    neighbors.push_back(word);
            }
            word[i] = s;
        }
        return neighbors;
}
public:
    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> word_list(wordList.begin(), wordList.end());
        vector<vector<string>> result;
        
        queue<vector<string>> Q;
        Q.push({beginWord});
        bool reached_end = false;
        unordered_set<string> visited;
        
        while(!Q.empty()){
            int n = Q.size();
            for(int i = 0; i < n; ++i){
                vector<string> path = Q.front(); // running path 
                Q.pop();
                vector<string> neighbors = findNeighbors(path.back(), word_list);
                for(int j = 0; j < neighbors.size(); ++j){
                    vector<string> new_path(path.begin(), path.end());
                    new_path.push_back(neighbors[j]);
                    visited.insert(neighbors[j]);
                    Q.push(new_path);
                    if(neighbors[j] == endWord){
                        result.push_back(new_path);
                        reached_end = true;
                    }
                }
            }
            if(reached_end) break;
            for(auto it = visited.begin(); it != visited.end(); ++it)
                word_list.erase(*it);
            visited.clear();
        }
        return result;
    }
};

//{ Driver Code Starts.

bool comp(vector<string> a, vector<string> b)
{
    string x = "", y = "";
    for(string i: a)
        x += i;
    for(string i: b)
        y += i;
    
    return x<y;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		vector<vector<string>> ans = obj.findSequences(startWord, targetWord, wordList);
		if(ans.size()==0)
		    cout<<-1<<endl;
		else
		{
		    sort(ans.begin(), ans.end(), comp);
            for(int i=0; i<ans.size(); i++)
            {
                for(int j=0; j<ans[i].size(); j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
		}
	}
	return 0;
}
// } Driver Code Ends