//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int sumOfDigits(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int countNumbers(int N, int K) {
        int low = 1, high = N;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int digitSum = sumOfDigits(mid);

            if (mid - digitSum >= K) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return N - low + 1;
    }

    int numberCount(int N, int K) {
        if (N < K) {
            return 0;
        }

        int count = countNumbers(N, K);
        return count;
    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends