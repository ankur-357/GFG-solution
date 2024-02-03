//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
// class Solution{
//     private:
//     int Findposition(int in[] ,int inorderStart , int inorderEnd , int element ,int  n){
//         for(int i = inorderStart ; i<=inorderEnd ;i++){
//             if(in[i]==element){
//                 return i ; 
//             }
//         }
//         return -1 ;
//     }
//     Node* solve(int in[],int pre[], int &index ,int inorderStart , int inorderEnd , int n){
//         if(index>=n || inorderStart>inorderEnd){
//             return NULL ;
//         }
        
//         int element = pre[index++] ; // At every interation index is increasing
//         Node* root  = new Node(element); 
//         int position  = Findposition(in , inorderStart , inorderEnd ,element, n);
        
//         root->left = solve(in , pre , index  , inorderStart , position-1 ,n);
//         root->right = solve(in , pre , index , position+1 , inorderEnd ,n);
        
//         return root ;
        
//     }
//     public:
    
//     Node* buildTr32ee(int in[],int pre[], int n)
//     {
//         // Code here
//          int preorderindex  = 0 ;  //Pre order is NLR so First element is root .
         
//          Node* ans = solve(in , pre , preorderindex , 0  , n-1 , n );
//          return ans ;
//     }

// };
// class Solution {
// public:
//     Node* constructTree(int preorder[], int preStart, int preEnd, int inorder[], int inStart, int inEnd, map<int, int> &mp) {
//         if (preStart >= preEnd || inStart > inEnd)
//             return nullptr;

//         int element = mp[preStart++];
//         Node* root  = new Node(element); 
//         int nElement = element - inStart;

//         root->left = constructTree(preorder, preStart + 1, preStart + nElement, inorder, inStart, element - 1, mp);
//         root->right = constructTree(preorder, preStart + nElement + 1, preEnd, inorder, element + 1, inEnd, mp);

//         return root;
//     }

//     Node* buildTree(int in[], int pre[], int n) {
//         int preStart = 0;
//         int preEnd = n - 1;
//         int inStart = 0;
//         int inEnd = n - 1;

//         map<int, int> mp;
//         for (int i = inStart; i <= inEnd; i++) {
//             mp[in[i]] = i;
//         }

//         return constructTree(pre, preStart, preEnd, in, inStart, inEnd, mp);
//     }
// };
class Solution{
    public:
    int find(int* in, int inorderstart,int inorderend,int element,int n){
        for(int i=inorderstart;i<=inorderend;i++){
            if(in[i]==element){
                return i;
            }
        }
        return -1;
    }
    Node* solve(int *in,int* pre,int &index,int inorderstart,int inorderend,int n,unordered_map<int,int>&mp){
        if(index>=n||inorderstart>inorderend){
            return NULL;
        }
        int element=pre[index++];
        Node* root= new Node(element);
        //int position = mp[element];
        int position=find(in, inorderstart, inorderend, element, n);
        root->left=solve(in,pre,index,inorderstart,position-1,n,mp);
        root->right=solve(in,pre,index,position+1,inorderend,n,mp);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int index=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[in[i]]=i;
        }
        Node* ans = solve(in,pre,index,0,n-1,n,mp);
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends