//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
};
// Utility function to create a new Tree Node
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->key = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}
// Function to Build Tree
Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node* root = newNode(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current node
			currNode->left = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}

int findMaxForN(Node* root,int N);

int main()
{

	int t;
	scanf("%d ", &t);
	while (t--)
	{
		string s;
		getline(cin >> ws, s);
		int x;
		cin >> x;

		Node* root = buildTree(s);
		cout << findMaxForN(root, x) << endl;

	}
	return 1;
}


// } Driver Code Ends


//User function Template for C++
/*
Structure of the Node of the BST is as
struct Node {
	int key;
	Node* left, *right;
};
*/
/*
   'N' is the element 
   'size' is the total element in BST
  */
  
void fun(Node* root,int N,int &ans){
    if(root==NULL)
        return;
    if((root->key)<=N){
        ans=root->key;
        fun(root->right,N,ans);
    }
    if((root->key)>N){
        fun(root->left,N,ans);
    }
    return;    
}

int findMaxForN(Node* root, int N)
{
    int result=-1;
    while(root)
    {
        if(root->key<=N)
        {
            result=root->key;
            root=root->right;
        }
        else if(root->key>N)
        {
            root=root->left;
        }
    }
    return result;
}



