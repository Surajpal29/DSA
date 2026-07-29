class Solution {
  public:
    void helper(vector<vector<int>>&graph,int curr,int v,vector<bool>&vis){
        for(int i=0;i<v;i++){
            if(graph[curr][i] && !vis[i]){
                vis[i]=1;
                helper(graph,i,v,vis);
            }
        }
    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>graph(V,vector<int>(V,0));
        
        for(auto it:edges){
            int u=it[0],v=it[1];
            graph[u][v]=1;
            graph[v][u]=1;
        }
        
        int res=0;
        vector<bool>vis(V,0);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                res++;
                helper(graph,i,V,vis);
            }
        }
        return res;
    }
};