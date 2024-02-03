//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/
class Solution {
public:
    unordered_map<Node*, Node*> parent;

    void addParent(Node* root) {
        if (!root)
            return;

        if (root->left)
            parent[root->left] = root;

        addParent(root->left);

        if (root->right)
            parent[root->right] = root;

        addParent(root->right);
    }

    void collectKDistanceNodes(Node* target, int k, vector<int>& result) {
        if (!target)
            return;

        queue<Node*> que;
        que.push(target);
        unordered_set<int> visited;
        visited.insert(target->data);

        while (!que.empty()) {
            int n = que.size();
            if (k == 0)
                break;

            while (n--) {
                Node* curr = que.front();
                que.pop();

                if (curr->left && !visited.count(curr->left->data)) {
                    que.push(curr->left);
                    visited.insert(curr->left->data);
                }
                if (curr->right && !visited.count(curr->right->data)) {
                    que.push(curr->right);
                    visited.insert(curr->right->data);
                }

                if (parent.count(curr) && !visited.count(parent[curr]->data)) {
                    que.push(parent[curr]);
                    visited.insert(parent[curr]->data);
                }
            }
            k--;
        }

        while (!que.empty()) {
            Node* temp = que.front();
            que.pop();
            result.push_back(temp->data);
        }
    }

    vector<int> KDistanceNodes(Node* root, int target, int k) {
        vector<int> result;

        addParent(root);

        collectKDistanceNodes(findNode(root, target), k, result);
        sort(result.begin(), result.end());
        return result;
    }

    Node* findNode(Node* root, int target) {
        if (!root)
            return nullptr;
        if (root->data == target)
            return root;

        Node* left = findNode(root->left, target);
        Node* right = findNode(root->right, target);

        return left ? left : right;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends