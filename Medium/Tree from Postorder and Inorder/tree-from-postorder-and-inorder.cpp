//{ Driver Code Starts
/* program to construct tree using inorder and postorder traversals */
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

/* This funtcion is here just to test buildTreeUtil() */
void preOrder(Node* node) {
    if (node == NULL) return;

    /* then print the data of node */
    printf("%d ", node->data);

    /* first recur on left child */
    preOrder(node->left);

    /* now recur on right child */
    preOrder(node->right);
}

Node* buildTree(int in[], int post[], int n);

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int in[n], post[n];
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> post[i];
        Node* root = buildTree(in, post, n);
        preOrder(root);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.

// Helper function to build the binary tree from the inorder and postorder traversals.
// in[] - The inorder traversal array.
// post[] - The postorder traversal array.
// inStart - The start index of the current inorder subarray.
// inEnd - The end index of the current inorder subarray.
// inIndex - An unordered map to store the indices of elements in the inorder traversal.
// postIndex - A static variable to keep track of the current index in the postorder traversal.
// Returns the root of the binary tree constructed from the given traversals.
Node* buildTreeHelper(int in[], int post[], int inStart, int inEnd, 
int &postIndex, unordered_map<int, int>& inIndex) {

    // If the inorder subarray is empty, return NULL.
    if (inStart > inEnd) return NULL;

    // Get the current element from the postorder traversal.
    int curr = post[postIndex--];

    // Create a new node with the current element.
    Node* newNode = new Node(curr);

    // If the inorder subarray has only one element, it is a leaf node, so return the node.
    if (inStart == inEnd) return newNode;

    // Find the index of the current element in the inorder traversal.
    int index = inIndex[curr];

    // Recursively build the right subtree from the elements after the current element in inorder.
    newNode->right = buildTreeHelper(in, post, index + 1, inEnd, postIndex, inIndex);

    // Recursively build the left subtree from the elements before the current element in inorder.
    newNode->left = buildTreeHelper(in, post, inStart, index - 1, postIndex, inIndex);

    return newNode;
}

// Function to return a binary tree created from inorder and postorder traversals.
// in[] - The inorder traversal array.
// post[] - The postorder traversal array.
// n - The number of nodes in the binary tree.
// Returns the root of the binary tree constructed from the given traversals.
Node* buildTree(int in[], int post[], int n) {
    // Create an unordered map to store the indices of elements in the inorder traversal.
    unordered_map<int, int> inIndex;

    // Populate the inIndex map with the indices of elements in the inorder traversal.
    for (int i = 0; i < n; i++)
        inIndex[in[i]] = i;
    int postIndex = n-1;
    // Call the helper function to construct the binary tree.
    return buildTreeHelper(in, post, 0, n - 1, postIndex, inIndex);
}
