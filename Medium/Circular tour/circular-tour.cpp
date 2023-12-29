//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
int tour(petrolPump p[], int n)
{
    int start = 0;  // Starting point of the tour
    int end = 1;    // Next petrol pump to consider
    int curPetrol = p[start].petrol - p[start].distance;  // Petrol available at the starting point

    // Loop until we find a suitable starting point or determine it's not possible
    while (end != start || curPetrol < 0)
    {
        // If current petrol is not enough to reach the next pump
        // Move to the next pump and update the available petrol
        while (curPetrol < 0 && end != start)
        {
            curPetrol -= p[start].petrol - p[start].distance;
            start = (start + 1) % n;
            
            // If start becomes 0, it means we have tried all possible starting points and failed
            if (start == 0)
                return -1;
        }

        // Update the petrol available at the next pump and move to the next pump
        curPetrol += p[end].petrol - p[end].distance;
        end = (end + 1) % n;
    }

    // If the loop exited, we have found a starting point that satisfies the condition
    return start;
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
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends