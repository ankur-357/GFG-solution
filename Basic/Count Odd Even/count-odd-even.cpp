//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int n)
    {
        
        // your code here
      int countEven = 0, countOdd = 0;
      int num;
        for (int i = 0; i < n; i++) 
        {
            num=arr[i];
            int bit=num & 1;
            if (bit)
              countOdd++;
            else
               countEven++; 
        }
    cout<<countOdd<<" "<<countEven<<endl;
    }
};


//{ Driver Code Starts.
int main() {
	
	// Testcase input
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    
	    int arr[sizeof_array];
	    
	    // Array elements input
	    for(int i = 0; i < sizeof_array; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    // Calling function to count even and odd
	    ob.countOddEven(arr, sizeof_array);
	    
	}
	
	return 0;
}
// } Driver Code Ends