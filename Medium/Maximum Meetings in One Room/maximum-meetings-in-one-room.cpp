//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        //here it store first finish point,then starting point,then index
        
        
        
        // jitna jaldi finish hoga meeting utna hum meeting attend kar sakti ha
        vector<pair<pair<int,int>,int>> temp;
        
        for(int i = 0; i<N; i++){
            temp.push_back({{F[i],S[i]},i+1});
        }
        sort(temp.begin(),temp.end());
        int finishtime = temp[0].first.first;// here is first finish time of meeting
        vector<int> result;
        result.push_back(temp[0].second);
        for(int i = 1; i<N; i++){
            if(temp[i].first.second>finishtime){
                result.push_back(temp[i].second);
                finishtime = temp[i].first.first;
            }
        }
        sort(result.begin(),result.end());
        return result;
        
        
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends