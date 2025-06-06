//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
bool isPrime(int n){
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
  
    return true;
}


    long long int largestPrimeFactor(long long int N){
        long long int maxi=0;
        long long int i;
        for( i=2;i*i<=N;i++){
            while(N%i==0){
                maxi=max(maxi,i);
                N=N/i;
            }
        }
        if(N>1){
            maxi=max(maxi,N);
        }
        return maxi;
    }


};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends