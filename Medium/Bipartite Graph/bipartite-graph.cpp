//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int ans=1;

void bfs(int i,vector<int> adj[],vector<int>& visited){

    queue<int> q;

    q.push(i);

    visited[i]=1;

    while(!q.empty()){

        int t=q.front();

        q.pop();

        for(auto x:adj[t]){

            if(visited[x]==-1){

                q.push(x);

                visited[x]=!visited[t]&1;

                

            }else if(visited[x]==visited[t]){

                ans=0;return;

            }

        }

    }

}

 bool isBipartite(int v, vector<int>adj[]){

     // Code here

     vector<int> visited(v,-1);

     for(int i=0;i<v;i++){

         if(visited[i]==-1){

             bfs(i,adj,visited);

         }

     }

     return ans;
}
 };

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends