//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

#include<bits/stdc++.h>
class Solution {
  public:
int mod = 1e9 + 7;

int commonSum(int n1, int n2, std::vector<int> &arr1, std::vector<int> &arr2) {
    // code here
  unordered_set<int>st;
        long long sum=0;
     long long   d=1e9+7;
        for(int i=0;i<n1;i++){
            st.insert(arr1[i]);
        } 
        for(int i=0;i<n2;i++){
           if(st.find(arr2[i])!=st.end()){
               sum+=arr2[i];
               st.erase(arr2[i]);
               sum%=d;
           }
        }
        return sum;
    }


};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n1;
        scanf("%d",&n1);
        
        
        int n2;
        scanf("%d",&n2);
        
        
        vector<int> arr1(n1);
        Array::input(arr1,n1);
        
        
        vector<int> arr2(n2);
        Array::input(arr2,n2);
        
        Solution obj;
        int res = obj.commonSum(n1, n2, arr1, arr2);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends