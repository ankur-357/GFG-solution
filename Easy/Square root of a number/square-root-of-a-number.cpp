//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root

class Solution {
public:
    long long int Sqrt(long long x) {
        return x * x;
    }

    long long int floorSqrt(long long int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        long long int low = 1;
        long long int high = x;
        long long int result = 0;

        while (low <= high) {
            long long int mid = low + (high - low) / 2;
            long long int squareRoot = Sqrt(mid);

            if (squareRoot == x) {
                return mid;
            } else if (squareRoot < x) {
                low = mid + 1;
                result = mid; // Store the potential answer
            } else {
                high = mid - 1;
            }
        }

        return result;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends