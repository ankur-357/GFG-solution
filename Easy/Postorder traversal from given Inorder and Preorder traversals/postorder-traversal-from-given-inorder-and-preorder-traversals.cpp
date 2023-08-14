//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void printPostOrder(int in[], int pre[], int n);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int pre[N],in[N];
        for(int i=0;i<N;i++)
            cin>>in[i];
        for(int i=0;i<N;i++)
            cin>>pre[i];
        printPostOrder(in,pre,N);
        cout<<endl;

    }
}

// } Driver Code Ends


/*prints the post order traversal of the 
tree */
struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
Node *postorder(int in[], int pre[], int &preIndex,int size, int InorderStart, int InorderEnd, unordered_map<int,int> &mp){
    
    if(preIndex >size || InorderStart>InorderEnd){
        return NULL;
    }
    
    int start = pre[preIndex]; // Fix here
    int pos = mp[start]; // Fix here
    preIndex++; // Increment preIndex here
    
    Node *root = new Node(start);
    
    root->left = postorder(in, pre, preIndex,size, InorderStart, pos-1, mp);
    root->right = postorder(in, pre, preIndex,size, pos+1, InorderEnd, mp);
    return root;
}

void printPost(Node *root)
{
    if(root){
        printPost(root->left);
        printPost(root->right);
        cout<<root->data<<" ";
    }
}
void printPostOrder(int in[], int pre[], int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[in[i]] = i;
    }
    
    int preIndex = 0; // Initialize preIndex
    Node* root = postorder(in, pre, preIndex, n, 0, n - 1, mp);
    printPost(root);
}