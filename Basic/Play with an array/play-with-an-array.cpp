//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> formatArray(vector<int> a,int n);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		vector<int>  b;
		b=formatArray(a,n);
		int flag=1;
		if(b.size()==n){
			for(int i=1;i<n;i+=2)
				if(b[i]<b[i-1])
					flag=0;
			if(flag==0)
				cout<<"0\n";
			else{
				sort(a.begin(),a.end());
				sort(b.begin(),b.end());
				for(int i=0;i<n;i++){
					if(a[i]!=b[i])
						flag=0;
				}
				cout<<flag<<endl;
			}
		}
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

vector<int> formatArray(vector<int> a, int n) {
    // Add code here.
    vector<int> ans;

    for (int i = 1; i < n; i += 2) {
        if (a[i] < a[i - 1] && i%2!=0) {
            swap(&a[i], &a[i - 1]);  // Swap if odd index element is smaller
        }
    }

    for (int i = 0; i < n; i++) {
        ans.push_back(a[i]);
    }
    return ans;
}