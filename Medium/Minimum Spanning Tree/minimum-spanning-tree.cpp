//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>key(V,INT_MAX),parent(V,-1);
        vector<bool>mst(V,0);
        
        // mark source as 0 in key and its parent as -1
        key[0]=0;
        parent[0]=-1;
        
        // algo
        for(int i=0;i<V;i++){
            int mini=INT_MAX;
            int b=-1;
            // finding the minimum vlaue of the key vector and it position
            for(int v=0;v<V;v++){
                if(mst[v]==0 && key[v]<mini){
                    b=v;
                    mini=key[v];
                }
            }
            // mark it as true to not to vidit again
            mst[b]=1;
            
            // go for its neighbour and check if weight here is lesser than parentin the key vector && neighbour is not visited,if yes the change it 
            for(auto neighbour:adj[b]){
                int x=neighbour[0];
                int y=neighbour[1];
                if(mst[x]==false && y<key[x]){
                    parent[x]=b;
                    key[x]=y;
                }
            }
        }
        // result the final weight
        int ans=0;
        for(int i=0;i<V;i++){
            ans=ans+key[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends