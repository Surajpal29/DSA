class Solution {
  public:
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        // Code here
        vector<vector<int>>graph(V,vector<int>());
        vector<bool>vis(V,0);
        
        for(auto it:edges){
            int u=it[0],v=it[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        queue<int>q;
        q.push(src);
        vis[src]=1;
        
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            
            if(curr==dest) return true;
            
            for(auto neighbours:graph[curr]){
                if( !vis[neighbours]){
                    vis[neighbours]=1;
                    q.push(neighbours);
                }
            }
        }
        return false;
    }
};
