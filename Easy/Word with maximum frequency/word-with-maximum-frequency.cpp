//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends


string maximumFrequency(string s){
        // Complete the function
    vector<string> ans;
    string sol="";
    int max=0;
    map<string, int> m1;
    map<string, int> m2;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            sol=sol+s[i];
           
        }
        else
        {
           
            m1[sol]++;
             if(m1[sol]>max)
            {
                max=m1[sol];
                
               
            }
            ans.push_back(sol);
            sol="";
            
        }
    }
    m1[sol]++;
    ans.push_back(sol);
    if(m1[sol]>max){
        max=m1[sol];
    }
                 
    for(auto x: m1){
        if(max==x.second)
        m2[x.first]=max;
    }
                 
    for(int i=0; i<ans.size(); i++)     
    {
        if(m2.find(ans[i])!=m2.end())
            return ans[i]+" "+to_string(m2[ans[i]]);
    }
}

