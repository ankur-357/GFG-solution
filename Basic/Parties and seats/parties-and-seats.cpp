//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    map<char,int> l;
    for(int i=0;i<n;i++)
    {
        l[party[i]]=seats[i];
    }
   
    
    for(auto i=l.begin();i!=l.end();i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<seats[i])
        {
            max=seats[i];
        }
    }
    cout<<max<<endl;
    
}



//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}
// } Driver Code Ends