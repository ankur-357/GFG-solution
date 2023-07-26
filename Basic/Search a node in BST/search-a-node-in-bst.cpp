//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node *root, int x);

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int s;
        cin >> s;

        cout << search(root, s);
        cout << endl;
    }
}

// } Driver Code Ends





int util(Node *root, int x, int &p) {
    if (root == nullptr) {
        return false; // Node with value x not found in the BST
    }

    if (x == root->data) {
        p = root->data;
        return true; // Node with value x found in the BST
    } else if (x > root->data) {
        return util(root->right, x, p);
    } else {
        return util(root->left, x, p);
    }
}

// Function to search a node in BST.
bool search(Node* root, int x) {
    int p = 0;
    return util(root, x, p);
}





































